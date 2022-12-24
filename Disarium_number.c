#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,sum=0,r,rev=0,r1,c=0;
    scanf("%d",&n);
    int m=n;
    while(m>0)
    {
        r1=m%10;
        c++;
        m=m/10;
    }
    int s=n;
    while(s>0)
    {
        r=s%10;
        sum=sum+pow(r,c);
        c--;
        s=s/10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}