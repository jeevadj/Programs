import java.util.*;

class Hello {


    public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
String str = s.nextLine();
		int len = str.length();
		int count =0;
		String[] splitedStr = str.split(" ");
		for(int i=0;i<splitedStr.length();i++){
		    String[] splited = splitedStr[i].split(":");
		    if(Integer.parseInt(splited[0])>10)
		       count++;
		    if(Integer.parseInt(splited[0])==10&&Integer.parseInt(splited[1])>0)
		       count++;
		}
		System.out.println(""+count);

	}
}