#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,n;
	cin>>t;
	while(t--)
	{
		ll sum=0,i=1;
		cin>>n;
		while(n/pow(5,i)>0)
		{
			sum+=n/pow(5,i);
			i++;
		}
		cout<<sum<<endl;
	}
}
