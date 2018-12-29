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

main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,n,ans,i,j,x;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		ll f=0;
		cin>>n;
		ll p=n,q;
		if(n<0)
			p=(n*-1);
		x=sqrt(p);
		for(j=2;j<=x;j++)
		{
			ans=(ll)ceil((log10(p)/log10(j)));
			q=j;
			if(n<0)
				q=q*-1;
			
			if(((ll)pow(q,ans))==n)
			{
				f=1;
				break;
			}
			//cout<<x<<endl;
		}
		if(f==1)
			printf("Case %lld: %lld\n",i,ans);
		else
			printf("Case %lld: %lld\n",i,1LL);
	}
}

