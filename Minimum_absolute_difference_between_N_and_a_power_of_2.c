#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,i,s,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=pow(2,i);
        if(n>=p)
        {
        	s=abs(n-p);
		}
        else
        {
        	b=abs(n-p);
        	break;
		}
    }
    if(s>b)
    printf("%d",b);
    else if(b>=s)
    printf("%d",s);
}