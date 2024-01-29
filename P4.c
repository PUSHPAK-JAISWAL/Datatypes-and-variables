// this is a program to take two variables from the user and give its result
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",& a);
    printf("enter the second number");
    scanf("%d",& b);
    c = a+b;
    printf("sum of %d and %d is %d",a,b,c);
}