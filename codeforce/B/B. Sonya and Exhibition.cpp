#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,a,b;
    cin>>n>>m;
    for(i=0;i<m;i++) cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if((i&1)) cout<<"0";
        else cout<<"1";
    }
    cout<<endl;
}
