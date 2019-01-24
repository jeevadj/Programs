import sample.SamplePackage;
import sample.SampleAnotherClass;

class PackageExample{
    public static void main(String ss[]){
        SamplePackage sp = new SamplePackage();
        sp.Print();
       System.out.println( sp.add(20,30));

       SampleAnotherClass s = new SampleAnotherClass();
       s.Print();
    }
}