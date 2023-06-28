#include<stdio.h>
int main()
{
    int n,r,q;
    scanf("%d%d%d",&n,&r,&q);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[q];
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int k=1;k<=r;k++)
    {
        for(i=1;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%d
",a[b[i]]);
    }
}