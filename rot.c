#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int count=0,r=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
r=(n-1)-count;
printf("%d",r);
break;
} 
else
count++;
}
if(r!=0)
break;
}
if(r==0)
printf("%d",r);
return 0;
}
