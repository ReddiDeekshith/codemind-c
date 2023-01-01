#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n][b],i,j,c,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(m<a[j][i])
            {
                m=a[j][i];
            }
        }
        printf("%d
",m);
    }
}