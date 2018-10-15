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
	int a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a+b<=c){
    	if((a+b)==c)
    		ans=1;
    	else
    	ans=c-(a+b)+1;
    }
    else if(a+c<=b){
    	if(a+c==b)
    		ans=1;
    	else
    	ans=b-(a+c)+1;
    }
    else if(b+c<=a){
    	if(b+c==a)
    		ans=1;
    	else
    	ans=a-(b+c)+1;
    }
    cout<<ans<<endl;
}
