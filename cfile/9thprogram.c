#include <stdio.h>

int main(void)

{
float a,c,b;
printf("\nEnter two numbers : \n");
scanf("%f %f", &a,&b);

printf("\nFirst number is %f",a);
printf("\nSecond number is %f",b);

c = a; 
a = b;
b = c;
printf("\nThe swapped numbers are now :\n");
printf("\nFirst : %f\n",a);
printf("\nSecond : %f\n",b);
}
