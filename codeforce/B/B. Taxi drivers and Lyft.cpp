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
#define MAX 300005
using namespace std;
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,m,n,x;
    vector<int>driver,pesngr;
    cin>>n>>m;
    int a[n+m+1],ans[m+n+10]={0};
    for(i=0;i<m+n;i++) cin>>a[i];
    for(i=0;i<m+n;i++)
    {
    	cin>>x;
    	if(x==1){
    		driver.push_back(a[i]);
    		a[i]=0;
    	}
    	else{
    		pesngr.push_back(a[i]);
    	}
    }
    int j=0,k=0,q,p;
    for(i=0;i<m;i++)
    {
    	p=driver[i];
    	if(i+1!=m)
    	q=driver[i+1];
    	else q=INT_MAX;
    	while(1)
    	{
    		if(j==n)
    			break;
    		if(abs(pesngr[j]-p)<=abs(pesngr[j]-q))
    			ans[i]++;
    		else
    			break;
    		j++;
    	}
    	if(j==n) break;
    }
    for(i=0;i<m;i++)
    	cout<<ans[i]<<" ";
    cout<<endl;
}
