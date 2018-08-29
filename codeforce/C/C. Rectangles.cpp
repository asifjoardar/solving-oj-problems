#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll x[132674],x2[132674],y[132674],y2[132674];
int asif(ll a,ll b,ll n)
{
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if(x[i]<=a&&x2[i]>=a&&y[i]<=b&&y2[i]>=b)
			count++;
	}
	if (count>=n-1) return 1;
	else return 0;
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,a=-1000000001,b=-1000000001,c=1000000001,d=1000000001;
	cin>>n;
	ll i,m=-1000000001,i1;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>x2[i]>>y2[i];
		a=max(a,x[i]);
		b=max(b,y[i]);
		c=min(c,x2[i]);
		d=min(d,y2[i]);
	}
	if(asif(a,b,n)==1)
		cout<<a<<" "<<b<<endl;
	else if(asif(a,d,n)==1)
		cout<<a<<" "<<d<<endl;
	else if(asif(c,b,n)==1)
		cout<<c<<" "<<b<<endl;
	else if(asif(c,d,n)==1)
		cout<<c<<" "<<d<<endl;
}
