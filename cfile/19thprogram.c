#include <stdio.h>

int main (void)

{
int r,c,s;
for (r=4;r>0;r--)
{
for(s=1;s<=(4-r);s++)
printf(" ");
for(c=1;c<=r;c++)
printf("* ");
printf("\n");
}
printf("\n\n");
}
