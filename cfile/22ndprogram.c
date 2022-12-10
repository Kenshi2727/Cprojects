#include <stdio.h>

int main(void)

{
int a;
printf("enter marks: ");
scanf("%d",&a);
if (a>=85)
printf("Excellent\n");
else if(a>=65 && a<85)
printf("Good\n");
else if(a>=45 && a<65)
printf("Satisfactory\n");
else if (a<45)
printf("Needs Improvement\n");
}
