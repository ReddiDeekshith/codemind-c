#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),j,c=0,c1=0,c2=0,c3=0;
    for(j=0;j<l;j++)
    {
        if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
        {
            c++;
        }
        else if(a[j]=='1'||a[j]=='2'||a[j]=='3'||a[j]=='4'||a[j]=='5'||a[j]=='6'||a[j]=='7'||a[j]=='8'||a[j]=='9'||a[j]=='0')
        {
            c1++;
        }
        else if(a[j]==' ')
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",c,c3,c1,c2);
}