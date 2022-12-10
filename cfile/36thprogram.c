#include<stdio.h>
#include<stdlib.h>
int swap(int num1, int num2)
{
int num3;
num3 = num1;
num1=num2;
num2=num3;
printf("The value of A : %d \n", num1);
printf("The value of B : %d \n", num2);
return (num1, num2);
}
int main()
{
int n1, n2, res;
printf("Enter the value of A : \n");
scanf("%d", &n1);
printf("Enter the value of B : \n");
scanf("%d", &n2);
swap(n1, n2);
printf("\n\n");
}
