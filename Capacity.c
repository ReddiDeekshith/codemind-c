#include<stdio.h>
int dk(int t,int s,int b)
{
    int c,ci;
    c=2*t*s*b*512;
    ci=c/1024;
    printf("%d KB",ci);
    return 0;
}
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    dk(t,s,b);
}