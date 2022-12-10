#include <stdio.h>

int main(void)

{
float f,c;
printf("\nEnter the temperature in Fahrenheit : \n");
scanf("%f",&f);
c = (f-32)*(5.0/9.0);
printf("\nThe temperature in Celsius is = %.2f\n\n",c);
}
