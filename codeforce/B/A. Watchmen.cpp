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
    ll n,i,j,p,q,ans=0;
    cin>>n;
    map<int,int>mp,mp1;
    map<pair<int,int>,int>x;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
    	cin>>p>>q;
    	ans+=mp[p];ans+=mp1[q];
    	ans-=x[make_pair(p,q)];
    	mp[p]++;
    	mp1[q]++;
    	x[make_pair(p,q)]++;
    }
    
    cout<<ans<<endl;
}
