#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll asif(string s,ll n)
{
	ll res=0;
	for(int i=0;i<s.length();i++)
	{
		res=((res*10)+(s[i]-'0'))%n;
	}
	return res;
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string n;
	cin>>n;
	ll x=asif(n,4);
	ll y=(pow(1,x)+pow(2,x)+pow(3,x)+pow(4,x));
	cout<<y%5<<endl;
}
