#include<stdio.h>
int main()
{
    int a[3],b[3],c=0,c1=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int j=0;j<3;j++)
    {
        if(a[j]>b[j])
        {
            c++;
        }
        else if(a[j]<b[j])
        {
            c1++;
        }
    }
    printf("%d %d",c,c1);
}