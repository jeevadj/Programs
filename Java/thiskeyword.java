import java.util.*;
class thiskeyword{
   
    public static void main(String sr[]){
         ranjith r = new ranjith(112,"ranjith");
         r.display();
    }
}
class ranjith{
    private int id;
    private String name;
    public ranjith(int id,String name){
        this.id = id;
        this.name = name;
    }
    public void display(){
        System.out.println(id+" "+name);
    }
}