// this is  program to check the following result
// the output should by 00
#include <stdio.h>
void main()
{
    int a =0, b= 1;
    a=(a=5)&&(b=0);
    printf("%d",a);
    printf("%d",b);
}