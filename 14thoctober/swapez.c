#include <stdio.h>

int main(void)

{

float a,b,c,d;

printf("\nSwaping two numbers \n\n");

printf("Enter the first number : \n");

scanf("%f", &a);

printf("Enter the second number : \n");
scanf("%f", &b);



c = b;
d = a;

printf("After swaping the numbers, we get - \n%f\n%f", c, d);



}