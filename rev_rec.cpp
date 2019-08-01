#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *s,int len)
{
if(len<0)
return;
else
{
cout<<s[len];
return reverse(s,len-1);
}
}
int main(int argc,char *argv[])
{
char *s;
s=argv[1];
int len;
len=strlen(s);
reverse(s,len);
}
