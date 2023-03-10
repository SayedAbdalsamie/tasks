#include <stdio.h>
#include <stdlib.h>
float swap_wihtout_temp(float num1 ,float num2);
float swap_wiht_temp(float num1 ,float num2);
int main()
{
    printf( "please enter num1\n");
   float num1;
    scanf("%f",&num1);
    printf( "please enter num2\n");
   float num2;
    scanf("%f",&num2);D
    swap_wihtout_temp( num1 ,num2);
    swap_wiht_temp( num1 , num2);
   return 0;
}
float swap_wihtout_temp(float num1 ,float num2){
num1=num1 +num2;
num2 = num1 - num2;
num1 = num1 - num2;
printf("num1:%f\n num2:%f\n",num1,num2);
}
float swap_wiht_temp(float num1 ,float num2){
float temp = num1 ;
num1 = num2;
num2 = temp;
printf("num1:%f\n num2:%f\n",num1,num2);
}
