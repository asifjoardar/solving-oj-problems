#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ll i,j,m,n;
    ll sum=0,sum1=0;
    scanf("%lld",&n);
    ll *a=(ll*)malloc(n*sizeof(ll));
    for(i=0;i<n;i++)
    {
    	scanf("%lld",&a[i]);
    	sum+=a[i];
    }
    scanf("%lld",&m);
    ll *b=(ll*)malloc(m*sizeof(ll));
    for(i=0;i<m;i++)
    {
    	scanf("%lld",&b[i]);
    	sum1+=b[i];
    }
    if(sum-sum1!=0)
    	printf("-1\n");
    else
    {
    	ll count=0;
    	sum=0;sum1=0;i=0;j=0;
    	while(i<n)
    	{
    		count++;
    		sum=a[i++];
    		sum1=b[j++];
    		while(sum!=sum1)
    		{
    			if(sum<sum1) sum+=a[i++];
    			else sum1+=b[j++];
    		}
    	}
    	printf("%lld\n",count);
    }
}
