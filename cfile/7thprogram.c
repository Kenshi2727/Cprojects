#include <stdio.h>

int main(void)

{
float bs,da,ta,hra,gs;
printf("\nEnter the basic salary : \n");
scanf("%f",&bs);
da = 0.1*bs;
ta = 0.12*bs;
hra = 0.1*bs;
gs=bs+da+ta+hra;
printf("\nThe gross salary is = %.2f\n\n",gs);
}
