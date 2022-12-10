#include <stdio.h>

int main(void)

{
float a,b,c;
printf("\nEnter two numbers : \n");
scanf("%f %f", &a,&b);
c = (a>b)?a:b;
printf("\nThe greater number is %f\n\n",c);
}
