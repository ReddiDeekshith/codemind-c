#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1 && i%2==1)
        {
            s++;
        }
    }
    if(c==s)
    printf("True");
    else
    printf("False");
}