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
	int t,i,j,n,ans;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int count=0;
		cin>>n;
		int a[n+1];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		if(a[0]>2)
		{
			for(j=a[0];j>2;j-=5){
				count++;
			}
		}
		for(j=1;j<n;j++)
		{
			ans=a[j]-a[j-1];
			if(ans%5==0)
			count+=(ans/5);
			else
			count+=(ans/5)+1;
		}
		printf("Case %d: %d\n",i,count);
		
	}
}
