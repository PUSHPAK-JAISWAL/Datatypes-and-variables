// this is to check an relational expression
// the answer should be 1 according to theory
#include <stdio.h>
void main()
{
    int a;
    a = 3 > 2 > 1 != 3 < 40 > 20 != 30;
    printf("%d",a);
}