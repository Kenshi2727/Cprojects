#include <stdio.h>

int main(void)

{
int a,b,c;
printf("Enter 3 numbers - \n");
scanf("%d %d %d",&a, &b, &c);
if(a>b && a>c)
printf("%d is the greater number", a);
else if (b>a && b>c)
printf("%d is the greater number", b);
else
printf("%d is the greater number", c);
printf("\n\n");
}
