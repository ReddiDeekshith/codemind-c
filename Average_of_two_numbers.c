#include<stdio.h>
float dk(int a,int b)
{
    float av;
    av=(a+b)/2.0;
    return av;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float x=dk(a,b);
    printf("Average of %d and %d is: %.2f",a,b,x);
}