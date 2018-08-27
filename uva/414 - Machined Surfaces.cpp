#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
#define ll long long
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	char s[50];
	while(cin>>n)
	{
		if(n==0) break;
		int l=n,sum=0,m=30;
		while(n--)
		{
			getchar();
			int count=0;
			scanf ("%[^\n]s",s);
			for(int i=0;s[i]!='\0';i++)
			{
				if(s[i]!='X') count++;
			}
			m=min(m,count);
			sum+=count;
			//cout<<s<<endl;
		}
		//cout<<sum<<endl;
		cout<<sum-(m*l)<<endl;
	}
}
