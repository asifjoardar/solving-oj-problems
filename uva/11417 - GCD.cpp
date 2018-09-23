
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j;
    while(cin>>n)
    {
    	int sum=0;
    	if(n==0) break;
    	for(i=1;i<n;i++)
    	{
    		for(j=i+1;j<=n;j++)
    			sum+=__gcd(i,j);
    	}
    	cout<<sum<<endl;
    }
}
