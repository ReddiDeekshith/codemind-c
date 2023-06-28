#include<stdio.h>
int main()
{
    int t,n,r;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&n,&r);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int f=0;f<r;f++)
        {
            for(int j=1;j<n;j++)
            {
                for(int k=0;k<n-1;k++)
                {
                    int t=a[k];
                    a[k]=a[k+1];
                    a[k+1]=t;
                }
            }
        }
        for(int j=0;j<n-1;j++)
        {
            printf("%d ",a[j]);
        }
        printf("%d",a[n-1]);
        printf("
");
    }
}