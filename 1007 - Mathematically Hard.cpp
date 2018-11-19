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
#define ll unsigned long long int
using namespace std;
int p[5000005];
ll ans[5000005];
void phi()
{
	int i,j;
	for(i=2;i<=5000000;i++)
	{
		p[i]=i;
	}
	p[1]=1;
	for(i =2; i<=5000000; i++)
    {
        if(p[i]==i)
        {
            for(j=i; j<=5000000; j+=i)
                p[j]-=p[j]/i;
        }
    }
}
void sum()
{
	ans[1]=0;
	for(ll i=2;i<=5000000;i++)
	{
		ans[i] = p[i];
        ans[i]*=p[i];
        ans[i]+=ans[i-1];
	}
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	phi();
	sum();
	int t,i,a,b;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&a,&b);
		printf("Case %d: %llu\n",i,ans[b]-ans[a-1]);
	}
}
