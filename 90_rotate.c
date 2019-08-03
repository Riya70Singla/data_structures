#include<stdio.h>
int main()
{
int i,j,m,n;
scanf("%d%d",&m,&n);
int arr[m][n];
for(i=0;i<m;i++)
{  
    for(j=0;j<n;j++)
    {
       scanf("%d",&arr[i][j]);
    }
}
int arr1[m][n];
for(i=0;i<m;i++)
{ 
    int k=0;
    for(j=0;j<n;j++)
    {
       arr1[i][k]=arr[j][i];
       k++;
    }
}
for(i=0;i<m;i++)
{
    for(j=n-1;j>=0;j--)
    {
       printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
}
