#include<stdio.h>
int main()
{
int s, i=0,j=0,m,n;
printf("enter the dimensions of the matrices\n");
scanf("%d%d", &m,&n);
int a[m][n];
int b[m][n];
int c[m][n];
printf("enter the elements of the first matrix\n");
for (i=0; i<m; i++)
for (j=0; j<n; j++)
scanf("%d", &a[i][j]);
printf("enter the elements of the second matrix\n");
for (i=0; i<m; i++)
for (j=0; j<n; j++)
scanf("%d", &b[i][j]);
for (i=0; i<m; i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
printf("the sum of the matrices is-\n");
for (i=0; i<m; i++)
{
for (j=0; j<n; j++)
{
printf("%d ", c[i][j]);
}
printf("\n");
}
printf("\n\n");
}
