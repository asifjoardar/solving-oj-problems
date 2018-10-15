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
	int n,m,i,j,x,p,q;
	while(cin>>n>>m)
	{
		int a[100000],f=0;
		memset(a,0,sizeof(a));
		if(n==0) break;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a[x]++;
		}
		for(i=0;i<m;i++)
		{
			int count=0;
			cin>>p>>q;
			for(j=0;j<p;j++)
			{
				cin>>x;
				if(a[x]>0)
					count++;
			}
			if(count<q)
				f=1;
		}
		if(f==0)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
}
