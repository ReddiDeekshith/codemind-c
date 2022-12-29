#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,co,s1=0,z=0,r,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n>0)
        {
            r=n%10;
            s++;
            co=0;
            for(j=1;j<=r;j++)
            {
               if(r%j==0)
               {
                   co++;
               }
            }
            if(co==2)
            {
                s1++;
            }
            n=n/10;
        }
        if(s==s1)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}