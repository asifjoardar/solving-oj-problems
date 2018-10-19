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
    ll n,m,k,i;
    cin>>n>>m>>k;
    ll a[n];
    for(i=0;i<n;i++) {
    	cin>>a[i];
    }
    ll ans;
    ans=k-a[n-1];
    for(i=n-2;i>=0;i--)
    {
    	if(ans>=a[i])
    		ans=ans-a[i];
    	else
    	{
    		ans=k-a[i];
    		m--;
    	}
    	if(m==0) break;
    }
    cout<<n-i-1<<endl;
}
