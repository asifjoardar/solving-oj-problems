/**
    _________  _________  __________  ______
    ||=====||  |=======|  ||======||  ||||||
    ||     ||  ||             ""      ||
    ||-----||  ||=====||      ""      |||||
    ||     ||         ||      ""      ||
    ||     ||  |=======|  ||======||  ||

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	int n,m,i,j,t,a;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>n>>m;
		int p[n+1]={0};
		for(i=0;i<m;i++)
		{
			cin>>a;
			for(j=a;j<=n;j+=a)
			{
				if(j%7!=6&&j%7!=0)
					p[j]++;
			}
		}
		for(i=1;i<=n;i++)
		{
			if(p[i]!=0)
				count++;
		}
		cout<<count<<endl;
	}
}
