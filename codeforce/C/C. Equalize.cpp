#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,i=0,count=0;
	cin>>n;
	string s,s1;
	cin>>s>>s1;
	while(i<n)
	{
		if(s[i]!=s1[i])
		{
			if(i+1<n&&s[i+1]!=s1[i+1]&&s[i]!=s[i+1])
			{
				count++;
				i+=2;
			}
			else
			{
				count++;i++;
			}
		}
		else
			i++;
	}
	cout<<count<<endl;
}
