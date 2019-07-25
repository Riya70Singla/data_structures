#include<stdio.h>
#include<stdlib.h>
int right_rotate(int arr[],int n)
{
int last,i;
last=arr[n];
for(i=n;i>0;i--)
arr[i]=arr[i-1];
arr[0]=last;
}
int left_rotate(int arr[],int n)
{
int first,i;
first=arr[0];
for(i=0;i<n;i++)
{arr[i]=arr[i+1];
}
arr[n]=first;
}
int main(int argc,char *argv[])
{
int arr[argc],i,z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int r;
r=z/2;
int m;
m=z-r;
int arr1[r],arr2[m];
for(i=0;i<r;i++)
arr1[i]=arr[i];
int d=0;
for(i=r;i<z;i++)
{
arr2[d]=arr[i];
d++;
}
right_rotate(arr1,r-1);
left_rotate(arr2,d-1);
for(i=0;i<r;i++)
printf("%d",arr1[i]);
for(i=0;i<d;i++)
printf("%d",arr2[i]);
}
