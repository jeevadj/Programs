/* java doesnot support multiple inheritance
  interface concept
  implements-keyword

  interface - interface - extends keyword
  class - interface - implements keyword

*/
interface killi{
    public int a=100;
    public void name();
}
class ranjith implements killi{
    public void name(){
        System.out.println("Killivalavan");
    }
}

class interfacE extends ranjith {
    public void name(){
        
        System.out.println("Ranjith");
        super.name();
    }
    public static void main(String ss[]){
        killi r= new ranjith();
        killi i = new interfacE();
        r.name();
        i.name();
    }
}