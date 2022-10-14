#include <stdio.h>


int main(void)

{
 float a,b,c,d,e,f;

 printf("\n Finding the average of 5 numbers \n");

 printf("Enter the first number : \n");
 scanf("%f",&a);

 printf("Enter the second number : \n");
 scanf("%f",&b);

printf("Enter the third number : \n");
 scanf("%f",&c);

 printf("Enter the fourth number : \n");
 scanf("%f",&d);

 printf("Enter the fifth number : \n");
 scanf("%f",&e);

f = (a+b+c+d+e)/5;

 printf("The average of the five numbers is : %.2f", f);

}