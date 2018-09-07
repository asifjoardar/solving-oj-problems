#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,n,m,x=1000001,a[26]={0};
	string s;
	cin>>n>>m>>s;
	for(i=0;i<s.size();i++)
	{
		a[s[i]-'A']++;
	}
	for(i=0;i<m;i++)
		x=min(a[i],x);
	if(a[m-1]==0)
		cout<<0<<endl;
	else
	{
		cout<<m*x<<endl;
	}
}
