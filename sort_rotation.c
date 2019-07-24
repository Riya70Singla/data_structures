#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int arr[argc],i,z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int index=0,j;
for(i=0;i<z;i++)
{
for(j=i+1;j<z;j++)
{
if(arr[i]>arr[j])
{
index=j;
break;
}
}
if(index>0)
break;
}
for(i=index;i<z;i++)
printf("%d",arr[i]);
for(i=0;i<index;i++)
printf("%d",arr[i]);
}
