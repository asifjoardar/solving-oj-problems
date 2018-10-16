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
	ll t,i,n,m,a[90001];
	while(cin>>n)
	{
		if(n==0) break;
		if(n==1) {cout<<0<<endl;}
		else{
		ll f=0,j=0;double ans,x;
		m=n;
		while(n%2==0)
    	{
    	    f=1;
    	    n=n/2;
    	}
    	if(f==1) {a[j++]=2;f=0;}
    	for(i=3;i<=sqrt(n);i+=2)
    	{
    	    while(n%i==0)
    	    {
    	        f=1;
    	        n=n/i;
        	}
        	if(f==1) {a[j++]=i;f=0;}
    	}
    	if(n>2)
			a[j++]=n;
		ans=m;
		for(i=0;i<j;i++)
		{
			x=(double)a[i];
			ans*=((x-1)/x);
		}
		cout<<(int)ans<<endl;
	}
	}
}
