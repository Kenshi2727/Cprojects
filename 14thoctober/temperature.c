#include <stdio.h>

int main (void)

{
 
 float a,b;

 printf("\n Converting celsius to farenheit \n");

 printf("Enter the temperature in Celsius : \n");
 scanf("%f", &a);

 b = (a*9)/5 + 32;

 printf("The temperature in farenheit is : %.3f", b);


}