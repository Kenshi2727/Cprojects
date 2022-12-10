#include <stdio.h>
int main()
{
int n,i,j;
int arr[n];
float avg, sum=0;
printf("Enter size of the array- \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the element- \n");
scanf("%d",&arr[i]);
}
for(j=0;j<n;j++)
{
sum=sum+arr[j];
}
avg=sum/n;
printf("The average is = %f", avg);
printf("\n\n");
}
