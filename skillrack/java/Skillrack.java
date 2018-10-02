/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package skillrack;

/**
 *
 * @author user
 * 
 */
import java.util.Scanner;
public class Skillrack {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        	
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		float firstavg =0 , secondavg = 0;
		for(int i=0;i<=n;i++){
		    String str = s.nextLine();
		    String[] splitedStr = str.split(" ");
		    if(splitedStr.length>1){
		    firstavg += Float.valueOf(splitedStr[0]);
		    secondavg += Float.valueOf(splitedStr[1]);}
		}
	
		System.out.println(String.format("%.02f",(firstavg/n)));
		System.out.println(String.format("%.02f",(secondavg/n)));

	}
}
    
    

