#include<stdio.h>
int dk(int s,int t,int b)
{
    int c,ci;
    c=2*s*t*b*512;
    ci=c/1024;
    return ci;
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int x=dk(s,t,b);
    printf("%dkb",x);
}