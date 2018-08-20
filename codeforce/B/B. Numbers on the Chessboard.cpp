#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n,m,x,y,ans;
	cin>>n>>m;
	while(m--)
	{
	   	cin>>x>>y;
		ans = (x-1)*n+y+1;
		if (((x+y) % 2)!=0)
		    ans += n*n;
		cout<<ans/2<<endl;
	}
}
