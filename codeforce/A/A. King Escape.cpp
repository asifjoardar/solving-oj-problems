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
    /*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
    int n,x,y,cp1,cp2,dp1,dp2,f=0;
    cin>>n;
    cin>>x>>y;
    cin>>cp1>>cp2;
    cin>>dp1>>dp2;
    if(cp1<x&&cp2<y){
    	if(dp1>x||dp2>y)
    	f=1;
        //cout<<"NO\n";
    }
    else if(cp1<x&&cp2>y){
        if(dp1>x||dp2<y)
        f=1;
        //cout<<"NO\n";
    }
    else if(cp1>x&&cp2<y){
    	if(dp1<x||dp2>y)
        f=1;//cout<<"NO\n";
    }
    else if(cp1>x&&cp2>y){
    	if(dp1<x||dp2<y)
        f=1;//cout<<"NO\n";
    }
    if(f==0)
    	cout<<"YES\n";
    else
        cout<<"NO\n";
}
