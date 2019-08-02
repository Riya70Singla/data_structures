#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
    char *s;
    string m,n;
    s=argv[1];
    int len;
    len=strlen(s);
    int r=0,t=0;
    for(int i=0;i<len;i++)
    { 
       if(s[i]>='A' && s[i]<='Z')
       { 
           m[r]=s[i];
           r++;
       }
       else
       {
          n[t]=s[i];
          t++;
       }
    }
    for(int i=0;i<t;i++)
    cout<<n[i];
    for(int i=0;i<r;i++)
    cout<<m[i];
}
