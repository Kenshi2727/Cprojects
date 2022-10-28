#include <stdio.h>
#include <conio.h>

int main(void)

{
  float a,b,c,d,e,f;

  clrscr();

  printf("\nFinding H.R.A and D.A of employee's salary.\n");

  printf("Enter your salary : \n");
  scanf("%f",&a);

  if (a>=1 && a<=1500)
  {b = (10*a)/100;
  c = (90*a)/100;
  d = a+b+c;
  printf("Employee's gross salary [ Salary + H.R.A + D.A ] is : %.2f\n", d);}
  else if(a>=1500)
  {e = (98*a)/100;
  f = a+500+e;
  printf("Employee's gross salary [ Salary + H.R.A + D.A ] is : %.2f\n", f);}
  else if(a==0)
  printf("Bhik Manga lmao\n");
  else if(a<0)
  printf("Abey salle\n");
  }
