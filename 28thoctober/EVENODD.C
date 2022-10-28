#include <stdio.h>
#include <conio.h>

int main(void)

{ long int a;
  clrscr();
  printf("\nTo check if the given number is odd or even.\n");

  printf("Enter the number to check:\n");
  scanf("%ld", &a);

  if ((a%2) == 0)
  printf("The given number is even.\n");
  else
  printf("The given number is odd.\n");

  }