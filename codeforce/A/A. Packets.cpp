#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,n1;
	cin>>n;
	n=floor(log2(n));
	cout<<n+1<<endl;
}
