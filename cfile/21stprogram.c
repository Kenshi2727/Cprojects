#include <stdio.h>
#include <ctype.h>

int main(void)

{
char a,r;
printf("enter an alphabet\n");
scanf("%c",&a);
r=a;
r=tolower(a);
if(r=='a' || r=='i'||r=='e'||r=='o'||r=='u')
printf("%c is a vowel",a);
else
printf("%c is a consonant",a);
printf("\n\n");
}
