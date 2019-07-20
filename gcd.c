#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int i,arr[argc],z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int j,r;
int small;
small=arr[0];
int k;
k=z-1;
for(i=0;i<z;i++)
{
if(small>arr[i])
{
small=arr[i];
}
}
for(i=1;i<=small;i++)
{
int count=0;
for(j=0;j<z;j++)
{
if(arr[j]%i==0)
count++;
}
if(count==z)
{
r=i;
}}
printf("%d",r);
}
