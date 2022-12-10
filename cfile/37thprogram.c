#include<stdio.h>
#include<stdlib.h>
int Armstrong(int a)
{
int k=a;
int d,cube,sum=0,f=0;
while(a>0)
{
d=a%10;
cube=d*d*d;
sum= sum+cube;
a=a/10;
}
if (sum==k)
f++;
return f;
}
int main()
{
int n, res;
printf("Enter the number : \n");
scanf("%d", &n);
res = Armstrong(n);
if(res>0)
printf("%d is armstrong. \n", n);
else
printf("%d is not armstrong. \n", n);
printf("\n\n");
}
