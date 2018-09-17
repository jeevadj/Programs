interface naveen{
    int bow = 10;
    void likes();
    void likes2();
}

abstract class Mona {

    int bow1 = 20;
    // public void likes2(){
    //     System.out.println("Black and White\n 3Rd year C\n TOY TOY TOY TOY");

    //     System.out.println(""+bow);
    //     //bow = 20;
    //    // System.out.println(""+bow);
    // }
    public void likes2(){
        //  super.likes2();
          System.out.println("bow");
      }
}

class InterfaceEx extends Mona{
    
    

    public void likes(){
        System.out.println("LIkes Method");
    }
    
    public static void main(String arr[]){
       InterfaceEx interfaceEx = new InterfaceEx();
       
       interfaceEx.likes();
       interfaceEx.likes2();
       //System.out.println(""+bow);
    }
}