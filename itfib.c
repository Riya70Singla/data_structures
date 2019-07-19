#include<stdio.h>
int main()
{
int n,a=0,b=1,c;
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(int i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
}
return 0;
}
