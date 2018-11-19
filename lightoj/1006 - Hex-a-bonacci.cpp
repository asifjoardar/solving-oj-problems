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
#define ui unsigned int
using namespace std;
ll a,b,c,d,e,f,ans[10005];
ll fn(ll n)
{
	for(ll i=0;i<=n;i++)
	{
		if( i == 0 ){
			ans[i]= a;
			continue;
		}
	    if( i == 1 ){
	    	ans[i]= b;
	    	continue;
	    }
	    if( i == 2 ){
	    	ans[i]= c;
	    	continue;
	    }
	    if( i == 3 ){
	    	ans[i]= d;
	    	continue;
	    }
	    if( i == 4 ){
	    	ans[i]= e;
	    	continue;
	    }
	    if( i == 5 ){
	    	ans[i]= f;
	    	continue;
	    }

	    ans[i]=ans[i-1]+ans[i-2]+ans[i-3]+ans[i-4]+ans[i-5]+ans[i-6];
	    ans[i]=ans[i]%10000007;
	}
	return ans[n];
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll i,n,t;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>a>>b>>c>>d>>e>>f>>n;
		ll p=fn(n)%10000007;
		printf("Case %lld: %lld\n",i,p);
	}
}
