// this is the second method of addition of two numbers in java
import java.util.*;
public class P5
{
    public void display(int a,int b)
    {
        int c;
        c = a+b;
        System.out.println("The sum of "+a+" and "+b+" is "+c);
    }
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.println("enter two numbers");
        a = sc.nextInt();
        b = sc.nextInt();
        P5 d = new P5();
        d.display(a, b);
    }
}