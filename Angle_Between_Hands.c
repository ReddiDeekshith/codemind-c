#include<stdio.h>
#include<math.h>
int main()
{
    float h,m,c,d;
    scanf("%f:%f",&h,&m);
    c=abs((h*30)-(5.5*m));
    d=360-c;
    if(c<d)
    printf("%.1f",c);
    else
    printf("%.1f",d);
}