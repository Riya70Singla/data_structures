#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
char *s;
s=argv[1];
int len;
len=strlen(s);
for(int i=len;i>=0;i--)
{ 
   cout<<s[i];
}
}
