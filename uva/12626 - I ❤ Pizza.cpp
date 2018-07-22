#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,k;
    char s[601];
    cin>>t;
    while(t--)
    {
        int a=0,m=0,r=0,g=0,i=0,t=0,sum=0;
        cin>>s;
        for(k=0;s[k]!='\0';k++){
        if(s[k]=='M')
            m++;
        else if(s[k]=='A')
            a++;
        else if(s[k]=='R')
            r++;
        else if(s[k]=='G')
            g++;
        else if(s[k]=='I')
            i++;
        else if(s[k]=='T')
            t++;
        }
        while(m>=1&&a>=3&&r>=2&&g>=1&&i>=1&&t>=1)
        {
            m-=1;
            a-=3;
            r-=2;
            g-=1;
            i-=1;
            t-=1;
            sum++;
        }
        cout<<sum<<endl;
    }
}
