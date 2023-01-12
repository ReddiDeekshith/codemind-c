#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i,c=1;
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}