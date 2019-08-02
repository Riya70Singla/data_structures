#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
    char *s;
    char *j;
    string l;
    int u;
    s=argv[1];
    j=argv[2];
    int l1,l2;
    l1=strlen(s);
    l2=strlen(j);
    u=0;
    for(int i=0;i<l1;i++)
    { 
       int flag=0;
       for(int k=0;k<l2;k++)
       {
           if(s[i]==j[k])
           { 
              flag=1;
           }
       }
       if(flag==0)
       {
          l[u]=s[i];
          u++;
       }
    }
    for(int i=0;i<u;i++)
    cout<<l[i];
}
