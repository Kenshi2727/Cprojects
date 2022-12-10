#include <stdio.h>

int main(void)

{
int a,b,c,d,e=0,f;
printf("\nEnter a number : ");
scanf("%d",&a);
f=a;
for(c=0;c<=f;c++)
{ d=a%10;
  e=e+(d*d*d);
  a=a/10;
}

if(e==f)
printf("\nThe entered number is an ARMSTRONG NUMBER!\n\n");
else
printf("\nThe entered number is not an ARMSTRONG NUMBER...\n\n");
}
