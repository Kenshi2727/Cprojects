#include <stdio.h>

int main(void)

{
int a,b,c,d,f=0;
printf("\nEnter any 5 digit number: ");
scanf("%d",&a);
d = a;
for (b=0;b<5;b++)
{ c = a%10;
  f = f+c;
  a = a/10;
}
printf("\nThe sum of the digits of %d is %d\n\n", d,f);
}

