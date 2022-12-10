#include<stdio.h>
int main()
{
int i=0,j=0,m1,n1, m2,n2;
printf("enter the dimensions of the matrix 1\n");
scanf("%d%d", &m1,&n1);
int a[m1][n1];
printf("enter the dimensions of the matrix 2\n");
scanf("%d%d", &m2,&n2);
int b[m2][n2];
printf("enter the elements of the first matrix\n");
for (i=0; i<m1; i++)
for (j=0; j<n1; j++)
scanf("%d", &a[i][j]);
printf("enter the elements of the second matrix\n");
for (i=0; i<m2; i++)
for (j=0; j<n2; j++)
scanf("%d", &b[i][j]);
if(n1==m2)
{
int c[m1][n2];
int func(int m, int n)
{
int t=0;
for(j=0;j<m2;j++)
t=t+(a[m][j]*b[j][n]);
return t;
}
int h=0, k=0;
for (k=0; k<m1; k++)
{
for (h=0; h<n2; h++)
{
c[k][h]=func(k,h);
}
}
printf("the product of the matrices is-\n");
for (i=0; i<m1; i++)
{
for (j=0; j<n2; j++)
{
printf("%d ", c[i][j]);
}
printf("\n");
}
}
else
printf("the multiplication of the matrices is not possible-\n");
printf("\n\n");
}
