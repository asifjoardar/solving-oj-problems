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
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,p,q,x,y;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
    	cin>>n;
    	ll sum=0,j;
    	for(j=2;j<=sqrt(n);j++)
    	{
    		p=n/j;q=(j-1);

    		x=((p*(p+1))/2)-((q*(q+1))/2);
    		y=j*(p-j);
    		sum+=(x+y);
    	}
    	printf("Case %lld: %lld\n",i,sum);
    }
}
