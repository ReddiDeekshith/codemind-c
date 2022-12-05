#include<stdio.h>
float dk(float i)
{
    float c;
    c=2.54*i;
    return c;
}
int main()
{
    float i;
    scanf("%f",&i);
    float x=dk(i);
    printf("%.2f",x);
}