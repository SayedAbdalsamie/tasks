#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("please enter number\n ");
    float n1 ;
    //n1 base of number
    scanf("%f",&n1);
    printf("please enter exp\n ");
    float n2;
    //n2 is exp
    scanf("%f",&n2);
    float r;
    r=pow(n1 ,n2),
    printf("the num :%f\n the exp:%f\n ruslat:%f\n  ",n1 ,n2, r);
}
