/** BiSmIlLaHiR rAhMaNiR rAhIm **\

*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*

            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

map<ll,ll>mp;

void asif(ll n)//primefactor
{
	while(n%2==0)
	{
		mp[2]++;
		n/=2;
	}
	for(ll i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			mp[i]++;
			n/=i;
		}
	}
	if(n>2)
		mp[n]++;
}

ll mi(ll a, ll m) //mod inverse
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        ll q = a / m; 
        ll t = m; 
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    } 
    if (x < 0) 
       x += m0; 
  
    return x; 
}

ll bm(ll n,ll p,ll d)
{
    ll x;
    if(p==0) return 1;
    if(p%2==0)
    {
        x=bm(n,p/2,d);
        return (x%d*x%d)%d;
    }
    else
        return ((n%d)*bm(n,p-1,d)%d)%d;
}

main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,i,n,m,p,q;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		ll ans=1;
		cin>>n>>m;
		asif(n);
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			it->second*=m;
		}


		for(auto it=mp.begin();it!=mp.end();it++)
		{
			ll x;
			p=it->first;
			q=it->second;
			ll y=bm(p,q+1,1000000007);
			 x=((bm(y-1,1,1000000007))*(mi((p-1),1000000007)%1000000007))%1000000007;
			if(y==0)
			   x=1;
			ans*=x;
			ans=ans%1000000007;
		}
		printf("Case %lld: %lld\n",i,ans);
		mp.clear();
	}
}

