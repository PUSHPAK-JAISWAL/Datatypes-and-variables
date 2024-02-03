// this is a program to check the increment decrement tricky question
// this output will be compiler dependent
#include <stdio.h>
void main()
{
    int a = 5;
    int b ;
    b = ++a + ++a + a++;
    printf("%d",a);
    printf("%d",b);
}