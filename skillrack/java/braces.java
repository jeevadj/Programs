import java.util.Scanner;
class braces
{
public static void main(String arr[]){
  Scanner sc = new Scanner(System.in);
  String str = sc.nextLine(); //input 
  char[] j = new char[str.length()/2];
  int ctr = 0;
boolean flag = true;
  for(int i=0;i<str.length();i++){
   System.out.println(i+" "+str.charAt(i)+" "+ctr);
   if(str.charAt(i)=='{'){ j[ctr++]='{'; }
   if(str.charAt(i)=='('){ j[ctr++]='('; }
   if(str.charAt(i)=='['){ j[ctr++]='['; }
   if(str.charAt(i)==']'&&j[ctr-1]=='['){ j[(ctr-2)]='0';ctr = ctr-1;}else if(str.charAt(i)==']'){flag=false;break;}
   if(str.charAt(i)==')'&&j[ctr-1]=='('){ j[(ctr-2)]='0';ctr = ctr-1;}else if(str.charAt(i)==')'){flag=false;break;}
   if(str.charAt(i)=='}'&&j[ctr-1]=='{'){ j[(ctr-2)]='0';ctr = ctr-1;}else if(str.charAt(i)=='}'){flag=false;break;}
   System.out.println(i+" "+str.charAt(i)+" "+ctr);
}
if(flag){System.out.println("YES");}
else{System.out.println("NO");}
}}















// put number of openbraces array with respective to number of diff braces











