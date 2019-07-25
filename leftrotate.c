#include<stdio.h>
#include<stdlib.h>
void rotate(int arr[],int n)
{
int first;
first=arr[0];
for(int i=0;i<n;i++)
arr[i]=arr[i+1];
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
int k;
scanf("%d",&k);
for(i=0;i<k;i++)
rotate(arr,z-1);
for(i=0;i<z;i++)
printf("%d",arr[i]);
}
