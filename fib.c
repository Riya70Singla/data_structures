#include<stdio.h>
int fib(int n)
{
if(n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}
int main()
{
int n,a=0;
scanf("%d",&n);
while(a<n){
printf("%d",fib(a));
a++;
}
return 0;
}
