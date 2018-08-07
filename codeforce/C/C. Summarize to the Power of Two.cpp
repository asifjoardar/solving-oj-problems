#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	ll a[35],n,x,count=0,i;
	for(i=0;i<=34;i++) a[i]=pow(2,i);
	map<ll,ll>m;
	map<ll,ll>::iterator it;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	for(it=m.begin();it!=m.end();it++)
	{
		bool f=false;
		for(i=0;i<=34;i++)
		{
			ll t=it->first;
			if(a[i]-t<0) continue;
			else if(a[i]-t==t)
			{
				if(m[a[i]-t]>1)
				{
					f=true;
					break;
				}
			}
			else if(m[a[i]-t]>0)
			{
				f=true;
				break;
			}
		}
		if(!f) count+=it->second;
	}
	cout<<count<<endl;
}
