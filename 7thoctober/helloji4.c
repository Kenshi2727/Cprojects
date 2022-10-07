#include <stdio.h>
#include <conio.h>

void main()

{
float a,b,c;

printf("Enter the length of the rectangle :\n");
scanf("%f", &a);

printf("Enter the breadth of the rectangle :\n");
scanf("%f", &b);

c = a*b;

printf("The area of the rectangle is : %.2f", c);

}