#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,r,rev=0,c=0,r1,rev1=0,r2,rev2=0,z=0,r3,rev3=0,n;
    scanf("%d%d",&a,&b);
    int m=a;
    while(m>0)
    {
        r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    while(rev>0)
    {
        r1=rev%10;
        c++;
        rev1=rev1*10+r1;
        if(c==b)
        {
            break;
        }
        rev=rev/10;    
    }
    int s=a;
    while(s>0)
    {
    	r2=s%10;
    	z++;
    	rev2=rev2*10+r2;
    	if(z==b)
    	{
    		break;
		}
		s=s/10;
	}
	while(rev2>0)
	{
		r3=rev2%10;
		rev3=rev3*10+r3;
		rev2=rev2/10;
	}
	n=abs(rev1-rev3);
	printf("%d",n);
}