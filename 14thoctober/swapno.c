#include <stdio.h>

int main(void)

{

float a,b;

printf("\n Swaping two numbers \n");

printf("Enter the first number : \n");
printf("Enter the second number : \n");

scanf("%f %f", &a, &b);

///printf("Enter the second number : \n");
///scanf("%f", a);

printf("After swaping the numbers, we get - ");

temp = 0;
temp = a;

a=b;
b = temp;


}