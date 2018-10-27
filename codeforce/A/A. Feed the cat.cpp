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
    double ans,ans1,hh,mm,h,d,c,n,x;
    cin>>hh>>mm;
    cin>>h>>d>>c>>n;
    if(hh<20)
    {
    	ans=ceil(h/n)*c;
    	x=((((19-hh)*60)+(60-mm))*d)+h;
    	c=c-(c*.2);
    	ans1=ceil(x/n)*c;
    	printf("%lf\n",min(ans1,ans));
    }
    else
    {
    	ans=ceil(h/n)*(c-(c*.2));
    	printf("%lf\n",ans);
    }
}
