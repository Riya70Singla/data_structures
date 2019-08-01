#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
   char *s;
   char *j;
   s=argv[1];
   j=argv[2];
   int r;
   r=strcmp(s,j);
   if(r==0)
   cout<<"equal";
   else
   cout<<"not equal";
}


