import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
class regexEx{
    public static void main(String arr[]){
        Scanner s = new Scanner (System.in);
        String str = s.nextLine();
        String patternSample = "\\d+.\\d+";

        Pattern pattern = Pattern.compile(patternSample);
//        boolean check = Pattern.matches(patternSample, str);
  //      System.out.println(""+check);
       // System.out.println(""+pattern.pattern());
        Matcher matcher = pattern.matcher(str);
       // System.out.println(""+matcher.pattern().pattern());
        //System.out.println(""+matcher.find());
        while(matcher.find()){
            String subtemp = str.substring(matcher.start(),matcher.end());
            System.out.println("FOund :"+subtemp);
        } 
    }
}