#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,j=1;
	while(cin>>n)
	{
		ll count=0,i=1;
		if(n<0) break;
		while(i<n)
		{
			i*=2;
			count++;
		}
		printf("Case %lld: %lld\n",j++,count);
	}
}
