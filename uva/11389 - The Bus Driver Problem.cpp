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
	while(1){
	int n,i,d,r,sum=0,ans=0;
	cin>>n>>d>>r;
	int e[n],m[n];
	if(n==0&&d==0&&r==0) break;
	for(i=0;i<n;i++){
		cin>>m[i];
	}
	for(i=0;i<n;i++){
		cin>>e[i];
	}
	sort(m,m+n);
	sort(e,e+n,greater<int>());
	for(i=0;i<n;i++)
	{
		sum=m[i]+e[i];
		if(sum>d)
			ans+=(sum-d);
	}
	cout<<ans*r<<endl;
	}
}
