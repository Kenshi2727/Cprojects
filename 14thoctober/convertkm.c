#include <stdio.h>

int main (void)

{
	float a,b,c,d;
	
	printf("\nConverting the value entered by end-user in km to meters, feets and inches.\n");
	
   printf("Enter the distance between 2 cities in km : ");
   scanf("%f", &a);
   
   b = a*1000;
   
   c = a*3280.84;
   
   d = a*39370.079;
   
   printf("\nThe distance between the 2 cities in meters is : %f\n", b);
   
   printf("\nThe distance between the 2 cities in feets is : %f\n", c);
   
   printf("\nThe distance between the 2 cities in inches is : %f\n", d);
   
}
   