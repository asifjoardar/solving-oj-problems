#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,i,x,ans=1,j;
	map<int,int>a;
	map<int,int>::iterator it;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		for(j=2;j<=sqrt(x);j++)
		{
			if(x%j==0)
				a[j]++;
			while(x%j==0)
				x/=j;
		}
		if(x>1) a[x]++;
	}
	for(it=a.begin();it!=a.end();it++)
		{
			ans=max(ans,it->second);
		}
	cout<<ans<<endl;
}
