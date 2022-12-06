#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}