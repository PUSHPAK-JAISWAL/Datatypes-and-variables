// this program is to show the use of the logical operator
// assumed output according to theory is given beside the statment
#include <stdio.h>
void main()
{
    printf("%d",20&&35.5);// 1
    printf("%d",-30.3&&7.1);//1
    printf("%d",3&&0.0);//0
    printf("%d",13||7);//1
    printf("%d",0||-7);//1
    printf("%d",-12||13.6);//1
    printf("%d",0||0.0);//0
}