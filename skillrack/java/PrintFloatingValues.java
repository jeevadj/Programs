///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//package skillrack;
//
///**
// *
// * @author user
// */
//import java.util.Scanner;
//public class PrintFloatingValues {
//
//    public static void main(String[] args) {
//	   Scanner s = new Scanner(System.in);
//	   String str = s.nextLine();
//           char empty = 0;
//	   String[] splitedStr = str.split("[.]");
//           System.out.println("SPLITED LENGTH"+splitedStr.length);
//	   for(int i=0;i<splitedStr.length-1;i++){
//              // System.out.println(splitedStr[i]+" "+splitedStr[i+1] );
//	       int j=splitedStr[i].length()-1;
//               while(j>=0&&Character.isDigit(splitedStr[i].charAt(j--))){
//                   
//               }
//               splitedStr[i] = splitedStr[i].substring(j+1);
//               
//	       System.out.print(splitedStr[i]+".");
//               j=0;
//               while(!Character.isLetter(splitedStr[i+1].charAt(j))){
//                    System.out.print(""+splitedStr[i+1].charAt(j));
//                    if(j+1==splitedStr[i+1].length()){break;}
//                    splitedStr[i+1] = splitedStr[i+1].substring(j+1);
//               }
////	      
//             //  System.out.println("\n"+splitedStr[i+1]);
//	       System.out.println("");
//	   }
//	}
//}
//    
//
import java.util.*;
public class PrintFloatingValues{
    public static void main(String[] args) {
	   Scanner s = new Scanner(System.in);
	   String str = s.nextLine();
	   String[] splitedStr = str.split("[.]");
	   for(int i=0;i<splitedStr.length-1;i++){
	       int j=0;
	       while(j>=0&&Character.isDigit(splitedStr[i].charAt(j--))){}
	       splitedStr[i] = splitedStr[i].substring(j+1);
	       System.out.print(splitedStr[i]+".");
	       j=0;
	       while(!Character.isLetter(splitedStr[i+1].charAt(j))){
	           System.out.print(""+splitedStr[i+1].charAt(j));
	           if(j+1==splitedStr[i+1].length()){
	               break;
	           }
	           splitedStr[i+1] = splitedStr[i+1].substring(j+1);
	       }
	       System.out.println("");
	   }
	}
}