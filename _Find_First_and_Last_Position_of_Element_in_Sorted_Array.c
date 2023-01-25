#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,fr=-1,ls=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            fr=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            ls=i;
            break;
        }
    }
    printf("%d %d",fr,ls);
}