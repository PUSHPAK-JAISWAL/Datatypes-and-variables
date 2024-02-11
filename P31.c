// this is to test the follwing logical expression 
// according to theory the answer is 3 3 1 3 2
#include <stdio.h>
void main()
{
    int a = 2,b =2,c=0,d=2,e;
    e = a++ && b++ && c++||d++;// this is the logical operation
    printf("%d %d %d %d %d ",a,b,c,d,e);
}
