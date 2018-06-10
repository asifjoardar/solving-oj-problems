#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a,b,n,m,x,y;
    cin>>a>>b>>n>>m;
    if(a%b==0)
        cout<<0<<endl;
    else{
        x=(b-(a%b))*n;
        y=(a%b)*m;
        if(x<y)
        cout<<x<<endl;
        else
        cout<<y<<endl;
    }
}
