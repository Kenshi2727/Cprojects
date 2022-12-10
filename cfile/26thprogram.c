#include <stdio.h>
int main()
{
int size, i,j, target,c=0,d;
printf(" Enter the size of the array: \n");
scanf("%d", &size);
int array[size];
printf("Enter %d elements of the array: \n", size);
for (i = 0; i < size; i++)
{
scanf("%d", &array[i]);
}
printf(" Enter the number to be searched: \n");
scanf("%d", &target);
for (j=0; j<size; j++)
{
if(array[j]==target)
{
c=1;
d=j;
} }
if(c==1)
{
printf("the element is present in the array at the %dth index position \n",d);
}
else
printf(" the element is not present in the array \n");
printf("\n\n");
}
