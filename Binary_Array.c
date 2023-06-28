#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            c+=1;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}