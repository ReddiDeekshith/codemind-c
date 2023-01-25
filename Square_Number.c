#include<stdio.h>
int main()
{
    int n,i,j,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i*i+j*j==n)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}