#include <stdio.h>

int main(void)

{
float r,area,perimeter;
printf("\nEnter the radius of the circle :\n");
scanf("%f",&r);
area=(22.0/7.0)*r*r;
perimeter=2*(22.0/7.0)*r;
printf("\nThe circle's area is = %.2f and it's perimeter is = %.2f\n\n",area,perimeter);
}
