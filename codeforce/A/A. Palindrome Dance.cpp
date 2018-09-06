#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b,n,i,sum=0,j;
	cin>>n>>a>>b;
	int x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		if(x[i]==0&&x[j]==1||x[i]==1&&x[j]==0)
		{
			cout<<-1<<endl;
			return 0;
		}
		else if(x[i]==0&&x[j]==2||x[i]==2&&x[j]==0)
		{
			sum+=a;
		}
		else if(x[i]==1&&x[j]==2||x[i]==2&&x[j]==1)
			sum+=b;
		else if(x[i]==2&&x[j]==2)
		{
			if(a>=b)
				sum+=2*b;
			else
				sum+=2*a;
		}
	}
	if(n%2==1&&x[n/2]==2)
	{
		if(a>=b)
			sum+=b;
		else
			sum+=a;
	}
	cout<<sum<<endl;
}
