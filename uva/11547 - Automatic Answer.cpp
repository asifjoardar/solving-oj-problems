#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,n,l;
    char s[1000];
    cin>>n;
    while(n--)
    {
        cin>>a;
        a=a*567;
        a=a/9;
        a=a+7492;
        a=a*235;
        a=a/47;
        a=a-498;
        sprintf(s,"%d",a);
        l=strlen(s);
        cout<<s[l-2]<<endl;
    }
    return 0;
}
