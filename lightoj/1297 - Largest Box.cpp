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
    int t;
    double l,w,lw,p,q,x,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    	cin>>l>>w;
    	lw=l+w;
    	p=(lw+sqrt((lw*lw)-(3*l*w)))/6;
    	q=(lw-sqrt((lw*lw)-(3*l*w)))/6;
    	x=min(p,q);
    	ans=(l-(2*x))*(w-(2*x))*x;
    	printf("Case %d: %lf\n",i,ans);
    }
}
