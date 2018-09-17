import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
class regexEx{
    public static void main(String arr[]){
        Scanner s = new Scanner (System.in);
        System.out.print("Enter an email to check : ");
        String emailStr = s.nextLine();
        System.out.print("\nEnter the phoneNum to check : ");
        String phoneStr = s.nextLine();
        System.out.print("\nEnter the password to check : ");
        String passStr = s.nextLine();

        //String patternSample = "\\d+.\\d+";

        String EmailPattern = "[a-zA-Z_0-9.]+@[a-z]+.[a-z]+";
        String phoneNumberPattern = "[+][0-9]+[ ]*[0-9]{10}";
        String passwordPattern = "[a-zA-Z0-9!@~#$%^&*_+]+";

        Pattern emailPattern = Pattern.compile(EmailPattern);
        Pattern phonePattern = Pattern.compile(phoneNumberPattern);
        Pattern passPattern = Pattern.compile(passwordPattern);

       
    //    boolean check = Pattern.matches(patternSample, str);
    //    System.out.println(""+check);
    //    System.out.println(""+pattern.pattern());
        Matcher emailMatcher = emailPattern.matcher(emailStr);
        Matcher phoneMatcher = phonePattern.matcher(phoneStr);
        Matcher passWordMatcher = passPattern.matcher(passStr);
        

        System.out.println("Result of "+emailStr+" is "+emailMatcher.matches());
        System.out.println("Result of "+phoneStr+" is "+ phoneMatcher.matches());
        System.out.println("Result of "+passStr+" is "+ passWordMatcher.matches());
        // while(matcher.find()){
        //     String subtemp = str.substring(matcher.start(),matcher.end());
        //     System.out.println("FOund :"+subtemp);
        // } 
    }
}