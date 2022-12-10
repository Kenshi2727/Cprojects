#include <stdio.h>

int main(void)

{
int a,b,c,d=0;
printf("\nEnter a number : ");
scanf("%d", &a);
for(b=0;b<a;b++)
{ c = a%10;
  d = (d*10)+c;
  a = a/10;
}
printf("\nThe reverse of the number is %d\n\n",d);
}
