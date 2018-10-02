abstract class shape
{
    abstract void draw();
    public void shapes(){
        System.out.println("Abstract Method...");
    }
}
class rectangle extends shape
{
    void draw()
    {
        System.out.println("Rectangle");
    }
}
class triangle extends shape
{
    void draw()
    {
        System.out.println("Triangle");
    }
}

class abstclass
{
    public static void main(String args[])
    {
        shape s = new triangle();
        s.draw();
    }
}