#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    while(t!=1)
    {
        if(t%2==0)
        {
            t=t/2;
        }
        else if(t%3==0)
        {
            t=t/3;
        }
        else if(t%5==0)
        {
            t=t/5;
        }
        else
        {
            break;
        }
    }
    if(t==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}