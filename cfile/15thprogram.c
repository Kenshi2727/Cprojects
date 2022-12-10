#include <stdio.h>

int main(void)

{
int n,r=0,a;
printf("enter a no:");
scanf("%d",&n);
a=n;
while (n>0)
{
int b = n%10;
r=(r*10)+b;
n=n/10;
}
if (r==a)
{
printf("Pallindrome\n\n");
}
else
{
printf("not Pallindrome\n\n");
}
}
