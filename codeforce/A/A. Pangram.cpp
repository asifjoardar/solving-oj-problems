#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    int a[26],n,i,p=0;
    cin>>n;
    char s[n];
    for(i=0;i<26;i++)
        a[i]=0;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
        s[i]=tolower(s[i]);
    for(i=0;s[i]!='\0';i++)
    {
        a[s[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
