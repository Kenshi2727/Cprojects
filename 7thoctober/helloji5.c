#include <stdio.h>
#include <conio.h>

void main()

{
	float P, R, T, SI;
	
	printf("Calculating the Simple Interest for a sum of loan ;)\n");
	
	printf("\n");
	
	printf("Enter the Principal Amount : \n");
	scanf("%f", &P);
	
	printf("Enter the Rate of Interest : \n");
	
	scanf("%f", &R);
	
	printf("Enter the number of years : \n");
	
	scanf("%f", &T);
	
	SI = (P*R*T)/100;
	
	printf("The Simple Interest is : %.2f", SI);
	
}
