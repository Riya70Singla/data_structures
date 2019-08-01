#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char*argv[])
{ 
   int flag=0;
   char *s;
   s=argv[1];
   int length;
   length=strlen(s);
   for(int i=0;i<length;i++)
   { 
       if(s[i]!=s[length-i-1])
       {
           flag=1;
           break;
       }
   }
if(flag)
cout<<"not a palindrome";
else
cout<<"palindrome";
}
