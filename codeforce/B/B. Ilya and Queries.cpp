#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,i,n,l;
    char s[100005];
    cin>>s;
    l=strlen(s);
    int p[l]={0},x=0;
    for(i=1;i<l;i++)
    {
        if(s[i]==s[i-1])
            x++;
        p[i]=x;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        cout<<p[b-1]-p[a-1]<<endl;
    }
}
