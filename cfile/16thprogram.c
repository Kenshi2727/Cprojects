#include <stdio.h>

int main (void)
{
int n,i,a=0,b=1,c;
printf("enter limit of series\n");
scanf("%d",&n);
printf("%d\n",a);
printf("%d\n",b);
for (i=1;i<=(n-2);i++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
printf("\n\n");
}
