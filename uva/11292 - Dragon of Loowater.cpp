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
    int n,m,i,j;
    while(cin>>n>>m)
    {
    	int sum=0,a[n],b[m];
    	if(n==0&&m==0) break;
    	for(i=0;i<n;i++) cin>>a[i];
    	for(i=0;i<m;i++) cin>>b[i];
    	sort(a,a+n);
    	sort(b,b+m);
    	for(i=0,j=0;i<n&&j<m;)
    	{
    		if(a[i]<=b[j])
    		{
    			sum+=b[j];
    			j++;
    			i++;
    		}
    		else
    			j++;
    	}
    	if(i==n)
    		cout<<sum<<endl;
    	else
    		cout<<"Loowater is doomed!\n";
    }
}
