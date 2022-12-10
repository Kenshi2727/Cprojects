#include<stdio.h>
int Digit(int a)
{
int d,sum=0;
while(a>0)
{
d=a%10;
sum= sum+d;
a=a/10;
}
return sum;
}
int main()
{
int n, res;
printf("Enter the number : \n");
scanf("%d", &n);
res = Digit(n);
printf("Sum of digits of %d is- %d \n", n,res);
printf("\n\n");
}
