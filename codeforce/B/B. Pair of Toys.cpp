#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll x,y;
    cin>>x>>y;
    if(x<=y/2)
    	cout<<0<<endl;
    else if(x<y)
    {
    	cout<<((y-1)/2-(y-x))+1<<endl;
    }
    else if(x>=y)
    {
    	cout<<(y-1)/2<<endl;
    }
}
