#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f;
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    if(c==n)
    printf("-1");
    else
    printf("%d",c);
}