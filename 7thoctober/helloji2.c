#include <stdio.h>
#include <conio.h>

main()

{  char a,b,c;
  printf ("Enter your first name : \n");
  scanf("%c", &a);
  
  fflush(stdin);
  
 printf ("Enter your last name : \n");
  scanf("%c", &b);
  
  printf ("Your full name is %c %c", a, b);


}