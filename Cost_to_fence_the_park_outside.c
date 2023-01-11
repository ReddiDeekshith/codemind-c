#include<stdio.h>
int main()
{
    int l,b,w,c,a1,a2,a3;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=l*b;
    a2=(l+2*w)*(b+2*w);
    a3=(a2-a1)*c;
    printf("%d",a3);
}