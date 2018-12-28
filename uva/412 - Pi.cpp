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
int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,i,j,p;
	while(cin>>n)
	{
		if(n==0) break;
		int count=0;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				p=gcd(a[i],a[j]);
				if(p==1)
					count++;
			}
		}
		if(count==0)
			cout<<"No estimate for this data set.\n";
		else
		{
			p=n-1;
			p=((p*(p+1))/2)*6;
			double ans=sqrt(((double)p/(double)count));
			printf("%.6lf\n",ans);
		}
	}
}
