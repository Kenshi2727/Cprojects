#include<stdio.h>
int main()
{
int s, i=0,j=0,start=0,end=0, num, f=-1, t=0;
printf("enter size of the array\n");
scanf("%d", &s);
int n[s];
end=s-1;
int mid=(end+start)/2;
printf("enter the elements of the array\n");
for (i=0; i<s; i++)
scanf("%d", &n[i]);
printf("enter the elements that you want to search\n");
scanf("%d", &num);
for (i=0; i<s; i++)
{
for(j=0;j<s-1;j++)
{
if(n[j]>n[j+1])
{
t=n[j];
n[j]=n[j+1];
n[j+1]=t;
}
}
while(start<=end)
{
mid=(start+end)/2;
if (num==n[mid])
{
f=mid;
break;
}
else if(num>n[mid])
start=mid+1;
else if(num<n[mid])
end=mid-1;
}
}
if(f>-1)
printf("Number was found\n");
else
printf("Number was not found\n");
printf("\n\n");
}
