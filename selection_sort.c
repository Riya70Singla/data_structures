#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int z=0,i,arr[argc];
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int k;
int small=0;
for(i=0;i<z;i++)
{
small=arr[i];
for(int j=i+1;j<z;j++)
{
if(small>arr[j])
{
small=arr[j];
k=j;
}
}
if(small!=arr[i])
{
int temp;
temp=arr[i];
arr[i]=arr[k];
arr[k]=temp;
}
}
for(i=0;i<z;i++)
printf("%d",arr[i]);
}
