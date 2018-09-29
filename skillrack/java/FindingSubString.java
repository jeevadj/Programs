import java.util.*;

class findSubString{
    public static void main(String ss[]){
        String str ;
        int cnt = 0;
        Scanner s = new Scanner(System.in);
        str = s.nextLine();
        for(int i=0;i<str.length()/2;i++){
            for(int j=str.length();j>=0&&i<j;j--){
                System.out.println(str.substring(i,j));
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}