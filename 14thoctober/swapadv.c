#include <stdio.h>

int main (void)

{
 float a,b;

 printf("\nSwapping the 2 numbers entered \n\n");

 printf("Enter the first number : \n");
 scanf("%f", &a);

 printf("Enter the second number : \n");
 scanf("%f", &b);

 a=a+b;
 b=a-b;
 a=a-b;

 printf("Swapping the number : \n%f\n%f", a,b);
 
}