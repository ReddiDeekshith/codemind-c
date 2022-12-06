#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}