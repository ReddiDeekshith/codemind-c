#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int s=0;
        int t=n;
        while(t!=0)
        {
            int r=t%10,s1=1;
            for(int j=1;j<=r;j++)
            {
                s1=s1*j;
            }
            s+=s1;
            t=t/10;
        }
        if(s==n)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}