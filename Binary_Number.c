#include<stdio.h>
#include<math.h>

int main()
{
    
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<pow(2,n);i++)
    {
        t=i;
        for(j=n-1;j>=0;j--)
        {
            a[j]=t%2;
            t=t/2;
        }
    for(j=0;j<n;j++) 
    {
        printf("%d",a[j]);
    }
     printf("
");
    }
}