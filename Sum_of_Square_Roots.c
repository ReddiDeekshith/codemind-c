#include<stdio.h>
#include<math.h>
int main()
{
    float i,a,b,r,s=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        r=sqrt(i);
        s=s+r;
    }
    printf("%.2f",s);
}