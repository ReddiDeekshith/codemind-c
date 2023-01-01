#include<stdio.h>

int main(){
    
    int n,rev=0,r,m,i;
    scanf("%d",&n);
    while(1)
    {
        rev=0;
        m=++n;
        while(m)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(rev==n)
        {
            for(i=2;i<=n;i++) if(n%i==0) break;
            if(i==n) break;
        }
    }
    printf("%d",n);
}