#include<stdio.h>
int main()
{
    float u,b,tb,sr;
    scanf("%f",&u);
    if(u<200)
    {
        b=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        b=u*1.50;
    }
    else if(u>=400 && u<600)
    {
        b=u*1.80;
    }
    else if(u>600)
    {
        b=u*2.00;
    }
    if(b>400)
    {
        sr=b*0.15;
        tb=b+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=b+100;
        printf("%0.2f",tb);
    }
}