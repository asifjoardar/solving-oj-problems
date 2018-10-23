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
    int n,i;
    cin>>n;
    int a[n]={0};
    if(n<10)
    {
    	cout<<n<<endl;
    	for(i=0;i<n;i++)
    		cout<<1<<" ";
    	cout<<endl;
    }
    else
    {
    	int r,x=1,m=-1;
    	while(n>0)
    	{
    		r=n%10;
    		m=max(m,r);
    		for(i=0;i<r;i++)
    			a[i]+=x;
    		n/=10;
    		x*=10;
    	}
    	cout<<m<<endl;
    	for(i=0;i<m;i++)
    		cout<<a[i]<<" ";
    	cout<<endl;
    }
}
