import java.util.*;
import java.io.*;

class SMVEC{
 public static void main(String arr[])throws IOException{
     int a;
     
     BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

     String str = bf.readLine();

     String[] splitedStr = str.split("[isan]");
     //int[] array = new int[splitedStr.length];
     for(int i=0;i<splitedStr.length;i++){
         System.out.println(splitedStr[i]);
     }

     

    
     
 }
}