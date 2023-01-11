#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,l=strlen(a),c=0;
    for(i=0;i<l;i++)
    {
    	if(a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7'|| a[i]=='8'||a[i]=='9'||a[i]=='0')
    	{
    		c++;
		}
	}
	if(c==0)
	printf("Doesn't contain digit");
	else
	printf("Contains %d digit",c);
}