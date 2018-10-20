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
    int t,m,n,s,e;
    scanf("%d",&t);
    for(int l=1;l<=t;l++)
    {
    	printf("Case %d:\n",l);
    	scanf("%d %d",&n,&m);
    	int a[n];
    	for(int i=0;i<n;i++)
    		scanf("%d",&a[i]);
    	for(int i=0;i<m;i++)
    	{
    		int count=0;
    		scanf("%d %d",&s,&e);
    		s=lower_bound(a,a+n,s)-a;
    		e=upper_bound(a+s,a+n,e)-a;
    		//cout<<s<<endl<<e<<endl;
    		printf("%d\n",e-s);
    	}
    }
}
