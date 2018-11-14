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
ll asif(ll n)
{
	ll m=-1,count=0;
	while(n%2==0)
	{
		m=max(m,(ll)2);
		n/=2;
		if(count==0)
		count++;
	}
	for(ll i=3;i<=sqrt(n);i+=2)
	{
		ll f=0;
		while(n%i==0)
		{
			m=max(m,i);
			n/=i;
			f=1;
		}
		if(f==1)
			count++;
	}
	if(n>2){
		m=max(m,n);
		count++;
	}
	if(count==1)
		return -1;
	else
		return m;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,ans;
	while(cin>>n)
	{
		if(n==0) break;
		if(n<0)
			n=abs(n);
		ans=asif(n);
		if(ans==-1) cout<<-1<<endl;
		else
			cout<<ans<<endl;
	}
}
