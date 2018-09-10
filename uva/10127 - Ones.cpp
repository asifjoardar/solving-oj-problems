#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n;
	while(cin>>n)
	{
		string s="1";
		while(1)
		{
			ll res=0;
			for(ll i=0;i<s.length();i++)
			{
				res=((res*10)+(s[i]-'0'))%n;
				//cout<<res<<endl;
			}
			if(res==0)
				break;
			else
			s.push_back('1');
		//cout<<s<<endl;
		}
		cout<<s.length()<<endl;
	}
}
