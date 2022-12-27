#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][2],i,j,k,c;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(k=a[i][0];k<=a[i][1];k++)
        {
            if(k%10==2 || k%10==3 || k%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}