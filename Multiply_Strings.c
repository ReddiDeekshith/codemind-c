#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[10000];
    char str2[10000];
    scanf("%s",str1);
    scanf("%s",str2);
    char* a=str1;
    char* b=str2;
    long long int res1 = atoi(a);
    long long int res2 = atoi(b);
    printf("%lld",res1*res2);
}