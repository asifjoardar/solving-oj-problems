#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,t;
    pair<string,int> p[10];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int m=-1;
        for(j=0;j<10;j++)
        {
            cin>>p[j].first>>p[j].second;
            if(m<p[j].second)
                m=p[j].second;
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
        {
            if(p[j].second==m)
                cout<<p[j].first<<endl;
        }
    }
}
