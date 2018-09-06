#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,p,j=0,n,m;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int count=1,ans=0;
	for(i=0;i<n-1;)
	{
		count=1;
		while(i+1<n&&a[i]==a[i+1])
		{
			count++;
			i++;
		}
		if(i<n-1&&a[i]+m>=a[i+1])
		{
			ans+=count;
			i++;
		}
		else
			i++;
		//cout<<ans<<endl;
	}
	cout<<n-ans<<endl;
}
