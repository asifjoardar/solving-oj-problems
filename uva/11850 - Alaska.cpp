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
	int n,i;
	while(cin>>n)
	{
		if(n==0) break;
		int a[n+5],f=0;
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		//a[n]=1422;n++;
		for(i=0;i<n-1;i++)
		{
			if(abs(a[i]-a[i+1])>200)
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout<<"IMPOSSIBLE\n";
		else
		{
            if(2*(abs(a[n-1]-1422))>200)
			cout<<"IMPOSSIBLE\n";
			else
			cout<<"POSSIBLE\n";
		}
	}
}
