#include<stdio.h>
int dk(int x,int y,int z)
{
    int n;
    n=(z-y)/x;
    return n;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int f=dk(x,y,z);
    printf("%d",f);
}