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
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int a[15],b[15],t=1,i;
    while(cin>>a[0])
    {
    	if(a[0]<0) break;
    	printf("Case %d:\n",t++);
    	for(i=1;i<13;i++)
    		cin>>a[i];
    	for(i=0;i<12;i++)
    		cin>>b[i];
    	for(i=0;i<12;i++)
    	{
    		if(a[i]<b[i]){
    			a[i+1]+=a[i];
    			cout<<"No problem. :(\n";
    		}
    		else if(a[i]>=b[i])
    		{
    			cout<<"No problem! :D\n";
    			a[i+1]+=a[i]-b[i];
    		}
    	}
    }
}
