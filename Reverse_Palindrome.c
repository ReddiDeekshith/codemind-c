#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    label:
    int s=n;
    int r,rev=0,c,r1,rev1=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    c=s+rev;
    int s1=c;
    rev1=0;
    while(c>0)
    {
        r1=c%10;
        rev1=rev1*10+r1;
        c=c/10;
    }
    if(rev1==s1)
    {
        printf("%d",s1);
    }
    else
    {
        n=s1;
        goto label;
    }
    
}