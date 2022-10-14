#include <stdio.h>

int main(void)

{

float a,b, temp, tempr;

printf("\n Swaping two numbers \n");

printf("Enter the first number : \n");

scanf("%f", &a);

printf("Enter the second number : \n");

scanf("%f", &b);

///printf("Enter the second number : \n");
///scanf("%f", a);

temp = b;
tempr = a;

printf("After swaping the numbers, we get -\n%f \n%f", temp, tempr);


}