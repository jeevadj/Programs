import java.io.*;
class oop
{
    public static void main(String args[])throws IOException
    {
        File file = new File("D:\\Academics\\COLLEGE\\Placement\\Java\\Mona.txt");
        try
        {
            BufferedReader bf = new BufferedReader(new FileReader(file));
            String str;
            while((str=bf.readLine())!=null)
            {
                System.out.println(str);
            }
            bf.close();
        }
        catch (Exception e)
        {
            System.out.println(""+e.getMessage());
        }        
    }
}