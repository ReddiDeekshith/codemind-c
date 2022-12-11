#include<stdio.h>
int main()
{
    int s,t,b,c,ci;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    ci=c/1024;
    printf("%dKB",ci);
}