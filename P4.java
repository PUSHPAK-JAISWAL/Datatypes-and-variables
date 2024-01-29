// this is the program for addition of two numbers
import java.util.*;
public class P4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a,b,c;
        System.out.println("enter the first number");
        a = sc.nextInt();
        System.out.println("enter the second number");
        b = sc.nextInt();
        c = a+b;
        System.out.println("the sum of "+a+" and "+b+" is "+c);
    }
}