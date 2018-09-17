abstract class shape
{
    abstract void draw();
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