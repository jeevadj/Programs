/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package skillrack;

/**
 *
 * @author user
 */
import java.util.*;
public class reverseandremoveVowel {
    
      public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();
		ArrayList<Integer> indexList = new ArrayList<>();
		for(int i=0;i<str.length();i++){
		    if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u')
		      indexList.add(i);
		}
		char[] temp = str.toCharArray();
                System.out.println(indexList);
                for(int i=0;i<indexList.size();i++){
                    temp[str.length()-indexList.get(i)-1]='|';
                }
		for(int i=temp.length-1;i>=0;i--){
                    if(temp[i]!='|')
                     System.out.print(""+temp[i]);
                }
	
       
	}
    
}
