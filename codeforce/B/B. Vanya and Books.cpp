#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,digi,i,p=0;
	string s;
	cin>>n;
	digi=log10(n)+1;
	for(i=0;i<digi;i++)
		s.push_back('1');
	stringstream asif(s);
	asif>>p;
	cout<<digi*(n+1)-p<<endl;
}
