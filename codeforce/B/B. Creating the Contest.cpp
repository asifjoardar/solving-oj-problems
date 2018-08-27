#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,i,count=1,m=1;
	cin>>n;
	ll *a=(ll*)malloc(n*sizeof(ll));
	for(i=0;i<n;i++) cin>>*(a+i);
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<=a[i]*2)
			count++;
		else
		{
			m=max(m,count);
			count=1;
		}
	}
	cout<<max(m,count)<<endl;
}
