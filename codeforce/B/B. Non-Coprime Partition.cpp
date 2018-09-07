#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,i;
	cin>>n;
	if(n<3)
		cout<<"No\n";
	else
	{
		cout<<"Yes\n";
		cout<<1<<" "<<n<<endl;
		cout<<n-1<<" ";
		for(i=1;i<n;i++) cout<<i<<" ";
		cout<<endl;
	}
}
