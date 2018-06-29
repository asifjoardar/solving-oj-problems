#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,n,t;
    cin>>n>>t;
    int a[t];
    char s[t][3001],s1[t][3001],c[3001];
    for(i=0;i<t;i++)
    {
        cin>>s[i]>>s1[i];
        if(strlen(s[i])>strlen(s1[i]))
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>c;
        for(j=0;j<t;j++)
        {
            if(strcmp(c,s[j])==0)
            {
                if(a[j]==1)
                    cout<<s1[j]<<" ";
                else
                    cout<<c<<" ";
                break;
            }
        }
    }
}
