import java.util.Scanner;
class vimal{
    public int add(int a, int b){
        return a+b;
    }
    public static void main(String ar[]){
        vimal v = new vimal();
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(" "+v.add(a,b));
    }
}