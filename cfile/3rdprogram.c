#include <stdio.h>

int main(void)

{
float l,b,area;
printf("\nEnter the length and breadth of the rectangle :\n");
scanf("%f %f", &l,&b);
area = l*b;
printf("\nThe area of the rectangle is = %.2f\n\n",area);
}
