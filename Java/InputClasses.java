//Scanner - util
// BufferedReader - io 
// InputStreamReader - io


// method - first word first character - small  secondword first character - caps
// class - capss
import java.util.Scanner;

import org.omg.CORBA.portable.InputStream;

import java.io.*;
class InputClasses{
    public static void main(String sr[])throws IOException{
        // Scanner scanner = new Scanner(System.in);
        // int a = scanner.nextInt();
        // float b = scanner.nextFloat();
        // byte c = scanner.nextByte();
        // char d = scanner.next().charAt(0);
        // String s = scanner.nextLine();// one word
        // System.out.println(s);
        // boolean e = scanner.nextBoolean();
        
        

        // System.out.println(a+"\n"+b+"\n"+c+"\n"+d+"\n"+s+"\n"+e);

        // BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        // int a = Integer.parseInt(bf.readLine());
        // float b = Float.parseFloat(bf.readLine());
        // long c = Long.parseLong(bf.readLine());
        // System.out.println(a);

        InputStreamReader reader = new InputStreamReader(System.in);
        int a = reader.read();
        System.out.println(a);

    }
}
