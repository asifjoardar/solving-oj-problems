#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,p,a[26]={0};
    cin>>n>>t;
    char s[n],c='a';
    cin>>s;
    while(t>0&&c<='z'){
    i=0;
    while(i<n&&t>0)
    {
            if(s[i]==c)
            {
                s[i]='1';
                t--;
            }
            i++;
    }
    c++;
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!='1')
            cout<<s[i];
    }
    cout<<endl;
}
