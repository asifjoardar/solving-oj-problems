#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,n,count=0;
	string s;
	cin>>s>>n;
	int l=n;
	for(i=s.size()-1;i>=0&&n>0;i--)
	{
		if(s[i]=='0')
		{
			n--;
		}
		else
		{
			count++;
		}
	}
	if(n==0)
		cout<<count<<endl;
	else
		cout<<s.size()-1<<endl;
}
