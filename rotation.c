#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[],int n,int k)
{
int i,last;
for(int j=0;j<k;j++)
{
last=arr[n-1];
for(i=n-1;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=last;
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
int main(int argc,char *argv[])
{
int arr[argc],i,z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int k;
scanf("%d",&k);
rotate(arr,z,k);
}
