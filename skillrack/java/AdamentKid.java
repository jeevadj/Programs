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
public class AdamentKid {
    

    public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String str = s.next();
		int input1 = s.nextInt()-1;
		int input2 = s.nextInt()-1;
		int len = str.length();
		
		do{
		    input2 = input2 % len;
		}while(input2%len>len);
		
		input2 = (input2==0)?len-1:input2;
        if(str.charAt(input1)==str.charAt(input2)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
	}
}

