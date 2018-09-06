#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll i,p,j=0,n,m;
	cin>>n;
	ll *a=(ll*)malloc(n*sizeof(ll));
	for(i=0;i<n;i++) cin>>*(a+i);
	sort(a,a+n);
	for(i=1;i<n-1;i++)
	{
		if(a[i-1]+a[i]>a[i+1])
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO"<<endl;
}
