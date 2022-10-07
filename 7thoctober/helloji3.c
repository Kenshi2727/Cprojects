#include <stdio.h>
#include <conio.h>

main()

{
float a,b,c,d;

printf("Enter the length of the rectangle :\n");
scanf("%f", &a);

printf("Enter the breadth of the rectangle :\n");
scanf("%f", &b);

c = a+b;

d = 2*c;

printf("The perimeter of the rectangle is : %.2f", d);

}