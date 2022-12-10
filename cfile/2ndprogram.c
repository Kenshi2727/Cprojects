#include <stdio.h>

int main(void)

{
float p,r,t,si;
printf("\nEnter the principal,rate and time in years : \n");
scanf("%f %f %f", &p,&r,&t);

si = (p*r*t)/100;

printf("\nThe S.I. is = %.3f\n\n",si);
}
