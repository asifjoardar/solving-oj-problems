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
	ll i,n,m,p,l,r;
	cin>>n;
	ll a[n+1]={0},b[n+1]={0},c[n+1]={0};
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	sort(a,a+n+1);
	for(i=1;i<=n;i++)
		a[i]=a[i]+a[i-1];
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>l>>r;
		cout<<b[r+1]-b[l]<<endl;
	}
}
