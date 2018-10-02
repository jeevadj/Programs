
package skillrack;
import java.util.*;

public class SortingBoxes {
    public static void main(String arr[]){
        Scanner s = new Scanner(System.in);
        int n, nearByPostOffice;
        ArrayList<Integer> tempList, list;
        list = new  ArrayList<>();
        int smallValuePosition , bigValuePosition;
        n = s.nextInt();
        nearByPostOffice = s.nextInt();
        nearByPostOffice--;
        for(int i=0;i<n;i++){
            int temp = s.nextInt();
            list.add(i,temp);
        }
        tempList = list;
        Collections.sort(tempList);
        smallValuePosition = list.indexOf(tempList.get(0));
        System.out.println("Small_Value_Positon"+tempList.get(smallValuePosition)+" "+list.indexOf(tempList.get(smallValuePosition)));
        bigValuePosition = list.indexOf(tempList.get(tempList.size()-1));
        System.out.println("Big_value_Position"+tempList.get(bigValuePosition)+" "+list.indexOf(tempList.get(bigValuePosition)));
        if(smallValuePosition == nearByPostOffice){
            System.out.println("Equal condition"+(list.get(smallValuePosition)*list.get(bigValuePosition)));
        }else if(bigValuePosition != nearByPostOffice){
            int temp = list.get(nearByPostOffice)*list.get(bigValuePosition);
            int temp1 = list.get(smallValuePosition)*list.get(nearByPostOffice)*list.get(bigValuePosition);
            if(temp<temp1)
                System.out.println("Near with Big Value"+temp);
            else
                System.out.println("Near with Big and small Value"+temp1);
        }
    }
}
