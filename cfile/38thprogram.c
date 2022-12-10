#include<stdio.h>
void sum(int a, int b, int *s)
{
*s = a + b;
}
int main()
{
int a, b, s;
printf("Enter two numbers:");
scanf("%d%d", &a, &b);
sum(a, b, &s);
printf("Sum is:%d", s);
printf("\n\n");
}
