#include<stdio.h>
#include<stdlib.h>
void reverse(int *ptr,int s,int l)
{
int temp;
if(s>=l)
{
return;
}
temp=ptr[s];
ptr[s]=ptr[l];
ptr[l]=temp;
reverse(ptr,s+1,l-1);

}
int main(int argc,char *argv[])
{
int i,arr[argc],z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int *ptr=&arr;
reverse(ptr,0,z-1);
int j;
for(i=0;i<z;i++)
{
printf("%d\n",*ptr);
ptr++;
}
}
