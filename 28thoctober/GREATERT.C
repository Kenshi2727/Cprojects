#include <stdio.h>
#include <conio.h>

int main()

{
 int a,b;
 clrscr();

 printf("\nComparing two numbers\n");


 printf("Enter the first number: \n");
 scanf("%d", &a);

 printf("Enter the second number: \n");
 scanf("%d", &b);
 if (a>b)
 printf("The first number is greater than the second.\n");
 else
 printf("The second number is greater than the first.\n");

 }

