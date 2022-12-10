#include<stdio.h>
#include<stdlib.h>
int sum(int num1, int num2)
{
int num3;
num3 = num1 + num2;
return (num3);
}
int main()
{
int n1, n2, res;
printf("Enter the two numbers : \n");
scanf("%d %d", &n1, &n2);
//Call Function Sum With Two Parameters
res = sum(n1, n2);
printf("sum of %d and %d is : %d \n", n1,n2,res);
printf("\n\n");
}
