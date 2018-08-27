#include<bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t,a,b,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int x[n];
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			x[i]=abs(a-b);
		}
		sort(x,x+n);
		if(x[0]==x[n-1])
			cout<<"yes\n";
		else
			cout<<"no\n";
		if(t)
			cout<<endl;
	}
}
