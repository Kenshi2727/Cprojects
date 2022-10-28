#include <stdio.h>
#include <conio.h>

int main(void)

{ int a;

clrscr();
printf("\nTo find if the given number is positive or negative.\n");

printf("\nEnter the number : \n");
scanf("%d", &a);

if (a>0)
printf("The given number is positive (+).\n");
else if(a==0)
printf("The given number is zero (0).\n");
else if(a<0)
printf("The given number is negative (-).\n");

}