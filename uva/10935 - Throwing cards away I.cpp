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
    int i,n,p,j;
    while(scanf("%d",&n))
    {
    	if(n==0) break;
    	list<int>v;
    	for(i=1;i<=n;i++)
    		v.push_back(i);
    	printf("Discarded cards:");
    	while(v.size()>1)
    	{
    		printf(" %d",v.front());
            v.pop_front();
            int p=v.front();
            v.pop_front();
            if(!v.empty())
             printf(",");
            v.push_back(p);
    	}
    	printf("\nRemaining card: %d\n", v.front());
    	v.pop_front();
    }
}
