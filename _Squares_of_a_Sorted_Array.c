#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],m,j,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(a[j]*a[j]>a[j+1]*a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	   printf("%d ",a[i]*a[i]);	
	}
}

