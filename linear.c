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
int m,flag=0;
scanf("%d",&m);
int count=0;
for(i=0;i<argc;i++)
{
if(arr[i]==m)
{
count=i;
flag=1;
break;
}
} 
if(flag==1)
{
printf("Element is at position %d",count);
}
else
{
printf("Not Present");
}
}
