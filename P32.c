// this is a program to check the following logical expression
// the answer should be 1 1 1 2 1 according to theory
#include <stdio.h>
void main()
{
    int a =2,b=2,c=0,d=2,e;
    e = a-- &&  b-- && ++c||d++;
    printf("%d %d %d %d %d",a,b,c,d,e);
}