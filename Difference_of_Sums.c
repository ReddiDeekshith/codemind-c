#include<stdio.h>
int main()
{
    int i,n,d,s=0,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       s=s+i;
       j=j+i*i;
    }
    d=s*s-j;
    printf("%d",d);
}