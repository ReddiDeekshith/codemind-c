#include<stdio.h>
int main()
{
    float b,hra,da,pf,gs;
    scanf("%f%f%f",&b,&hra,&da);
    pf=b*0.12;
    gs=b+pf+hra+da;
    printf("%.2f
%.2f",pf,gs);
}