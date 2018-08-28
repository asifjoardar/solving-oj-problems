#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t,n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int sum=0,p=0;
		int *x=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			cin>>x[i];
			sum+=x[i];
		}
		for(i=0;i<n;i++)
		{
			if((sum-x[i])/m==(sum/m))
			{
				p=1;break;
			}
		}
		if(p==0)
		cout<<sum/m<<endl;
		else
		cout<<-1<<endl;
	}
}
