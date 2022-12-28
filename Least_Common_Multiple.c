#include<stdio.h>
int main()
{
    int a,b,max,min,i;
    scanf("%d%d",&a,&b);
    max= a>b? a:b;
    min= a>b? b:a;
    i=max;
    while(max%min!=0)
    {
        max=max+i;
    }
    printf("%d",max);
    
}