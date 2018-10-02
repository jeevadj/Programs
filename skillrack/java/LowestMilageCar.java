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
public class LowestMilageCar {
     public static void main(String[] args) {
		//Your Code Here
		Scanner s = new Scanner(System.in);
		String str = s.nextLine(),minMilageCar="";
		float min=9999.99f;
		String[] splitedStr = str.split(" ");
		for(int i=0;i<splitedStr.length;i++){
		    String[] splited = splitedStr[i].split("@");
                    float temp = Float.valueOf(splited[1]);
                    System.out.println(""+min+"  "+temp);
		    if(min>temp){
		        minMilageCar = splited[0];
                        min = temp;
		    }
		}
		System.out.println(minMilageCar);

	}
}
