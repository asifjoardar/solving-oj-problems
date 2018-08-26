#include<bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b,i,j,t;
	cin>>t;
	while(t--)
	{
		int m=-1;
		cin>>a>>b;
		int x[a];
		char s[10],s1[b];
		for(i=0;i<a;i++)
		{
			int count=0;
			cin>>s>>s1;
			if(s[0]=='c')
			{
				for(j=0;j<b;j++)
				{
					if(s1[j]=='0')
					{
						x[i]=3;
						break;
					}
				}
				if(j==b)
					x[i]=1;
			}
			else if(s[0]=='w')
			{
				for(j=0;j<b;j++)
				{
					if(s1[j]=='1')
						count++;
				}
				if(count==b)
					x[i]=2;
				else
					x[i]=1;
			}
		}
		for(i=0;i<a;i++)
			m=max(x[i],m);
		if(m==3)
			cout<<"INVALID\n";
		else if(m==2)
			cout<<"WEAK\n";
		else
			cout<<"FINE\n";
	}
}
