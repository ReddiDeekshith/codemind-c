#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char a[100];
	scanf("%d
",&n);
	for(i=1;i<=n;i++)
	{
	     scanf("
%[^
]s",a);
	     int l=strlen(a),c=0;
	     for(j=0;j<l;j++)
	     {
	        if(a[j]=='1' || a[j]=='2' ||a[j]=='3' ||a[j]=='4' || a[j]=='5'||a[j]=='6'||a[j]=='7'||a[j]=='8'||a[j]=='9'||a[j]=='0')
	        {
	        	c++;
			}
		 }
		 if(c==l)
		 {
		 	printf("True
");
		 }
		 else
		 {
		 	printf("False
");
		 }
	}
}