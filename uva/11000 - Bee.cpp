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
ll asif(ll n)
{
	ll i,a=0,b=1,c,sum=0;
       for(i=1;i<=n;i++)
         {
             c = a+b;
             a = b;
             b = c;
             sum+=c;
         }
    return sum;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin>>n)
    {
    	ll sum=0;
    	if(n<0) break;
    	if(n==0) cout<<0<<" "<<1<<endl;
    	else
    	cout<<asif(n-1)+1<<" "<<asif(n)+1<<endl;
    }
}
