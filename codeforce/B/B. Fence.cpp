#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,m,m2=LONG_LONG_MAX,t,ans=1,x;
    cin>>n>>m;
    ll *sum=(ll*)malloc(n*sizeof(ll)+1);
    for(ll i=1;i<=n;i++)
    {
    	cin>>x;
    	sum[i]=sum[i-1]+x;
    }
    for(int i=m;i<=n;i++)
    {
    	if(sum[i]-sum[i-m]<m2)
    	{
    		m2=sum[i]-sum[i-m];
    		ans=i-m+1;
    	}
    }
    cout<<ans<<endl;
}
