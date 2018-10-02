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
import java.util.Scanner;
public class FirstCharacter {
     public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    String str = s.nextLine();
	    String[] splitedStr = str.split(" ");
            
	  for(int i=0;i<splitedStr.length;i++){
	        char[] myChar = splitedStr[i].toCharArray();
                System.out.println(""+myChar.length);
	        myChar[0] = Character.toUpperCase(myChar[0]);
	        splitedStr[i] = String.valueOf(myChar);
	    }	    for(int i=0;i<splitedStr.length;i++){
	        System.out.print(splitedStr[i]+" ");
	    }

	}
}
