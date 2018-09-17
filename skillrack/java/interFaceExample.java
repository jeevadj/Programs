interface inter{
public int aaa =100 ;
public void display();
/*{
System.out.println("HELLO");
}*/
}

abstract class bow {
  public void display1()
  {
     System.out.println("abstract class HELLOWORLD");
  }
  /*@Override
  public void display(){
    System.out.println("abstract class HELLO");
  }*/
}

class interFaceExample extends bow implements inter{
    @Override
     public void display1(){
             //super.display1();
            System.out.println("main class HELLOWORLD");
     } 
     
     @Override
     public void display()
      {
        //  super.display();
          System.out.println("Interface HELLO");
      }

     public static void main(String ar[]){
         bow a = new interFaceExample();
	 bow c = new interFaceExample();
         inter b = new interFaceExample();
	 c.display1();
         b.display();
	 a.display1();
         b.display();
         
System.out.println(""+aaa);
    }
}