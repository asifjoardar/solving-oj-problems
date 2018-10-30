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
    int n,j=1;
    while(cin>>n)
    {
    	int count=0,i,sum=0,p;
    	if(n==0) break;
    	int a[n];
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sum+=a[i];
    	}
    	p=sum/n;
    	for(i=0;i<n;i++)
    	{
    		if(a[i]!=p)
    			count+=abs(p-a[i]);
    	}
        printf("Set #%d\n",j++);
        printf("The minimum number of moves is %d.\n\n",count/2);
    }
}
