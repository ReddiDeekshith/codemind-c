#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],c=0,t,rev=0,r;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        t=a[i];
        rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        cout<<rev<<" ";
    }
}