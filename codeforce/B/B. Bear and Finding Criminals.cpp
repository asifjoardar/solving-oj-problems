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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,p,j,q,sum=0;
    cin>>n>>m;
    int *a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
    	cin>>a[i];
    }
    if(n==1)
    {
    	cout<<a[0]<<endl;return 0;
    }
    if(m<=n/2)
    {
    	for(i=0,j=(m+m)-2;i<m-1;i++,j--)
    	{
    		if(a[i]==a[j])
    			sum+=a[i]+a[j];
    	}
    	sum+=a[m-1];
    	for(i=m+m-1;i<n;i++)
    		sum+=a[i];
    	cout<<sum<<endl;
    }
    else
    {
    	for(i=m-(n-m)-1,j=n-1;i<m-1;i++,j--)
    	{
    		if(a[i]==a[j])
    			sum+=a[i]+a[j];
    	}
    	sum+=a[m-1];
    	for(i=0;i<m-(n-m)-1;i++)
    		sum+=a[i];
    	cout<<sum<<endl;
    }
}
