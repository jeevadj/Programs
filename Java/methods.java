import java.util.*;
abstract class Animals{
    public abstract String sound();
    public abstract int legCount();
}
class Dog extends Animals{
    private String soundMade;
    private int lCount;

    Dog(String s, int l){
        this.soundMade = s;
        this.lCount = l;
    }

    public String sound(){
        return this.soundMade;
    }

    public int legCount(){
        return this.lCount;
    }
}
class methods{
    public static void main(String arr[]){
        Dog d= new Dog("buff",4);
        System.out.println(""+d.sound()+"\n"+d.legCount());
    }
}