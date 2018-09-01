#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
	{
		return gcd(b,a%b);
	}
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,g,i;
		cin>>n;
		vector<int> a(n);
		for(i=0;i<n;i++) cin>>a[i];
		g = a[0];
		for(i=1;i<n;i++)
		{
			g = gcd(g,a[i]);
		}
		for(i=0;i<n;i++)
		{
			cout<<a[i]/g<<" ";
		}
		cout<<endl;
	}
}
