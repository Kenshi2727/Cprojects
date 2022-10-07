#include <stdio.h>
#include <conio.h>

void main()

{
	
	float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
	
	printf ("Doing some basics operations by taking inputs from the end-user. \n");
	
	printf("\n");
	
	printf ("Addition of 2 numbers. \n");
	
	printf ("\n");
	
	printf ("Enter first number : \n");
	
	scanf("%f", &a);
	
	printf ("Enter second number : \n");
	
	scanf("%f", &b);
	
	c = a+b;
	
	printf ("\nThe Addition of the 2 given numbers is : %.3f\n", c);
	
	printf("\n");
	
	printf ("\nSubtraction of 2 numbers. \n");
	
	printf ("\n");
	
	printf ("Enter first number : \n");
	
	scanf("%f", &d);
	
	printf ("Enter second number : \n");
	
	scanf("%f", &e);
	
	f = d-e;
	
	printf ("\nThe Subtraction of the 2 given numbers is : %.3f\n", f);
	
	printf("\n");
	
	printf ("\nMultiplication of 2 numbers. \n");
	
	printf ("\n");
	
	printf ("Enter first number : \n");
	
	scanf("%f", &g);
	
	printf ("Enter second number : \n");
	
	scanf("%f", &h);
	
	i = g*h;
	
	printf ("\nThe Multiplication of the 2 given numbers is : %.3f\n", i);
	
	printf("\n");
	
	printf ("\nDivision of 2 numbers. \n");
	
	printf ("\n");
	
	printf ("Enter first number : \n");
	
	scanf("%f", &j);
	
	printf ("Enter second number : \n");
	
	scanf("%f", &k);
	
	l = j/k;
	
	printf ("\nThe Division of the 2 given numbers is : %.3f\n", l);
	
	printf("\n");
	
	printf ("\nRaising one number to the power of the other \n");
	
	printf ("\n");
	
	printf ("Enter first number : \n");
	
	scanf("%f", &m);
	
	printf ("Enter second number : \n");
	
	scanf("%f", &n);
	
	o = pow(m,n);
	
	printf ("\nThe Power of the 2 given numbers is : %.3f\n", o);
	
	printf ("\n  Thank you \n");
	printf ("\n - Obsidian Maximus");
	
}  