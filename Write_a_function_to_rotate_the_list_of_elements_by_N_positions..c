#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s;
    scanf("%d",&s);
    for(k=1;k<=s;k++)
    {
    	for(i=n-1;i>=0;i--)
       {
       	if(n-1>i)
       	{
       	m=a[i];
    	a[i]=a[i+1];
    	a[i+1]=m;	  
		}
       }
	}
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}