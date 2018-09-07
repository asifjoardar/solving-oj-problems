#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll n,i,sumA=0,sumB=0;
	cin>>n;
	ll a[n+1]={0},b[n+1]={0},x=n,y=n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
	sort(a,a+n+1);
	sort(b,b+n+1);
	for(i=0;i<n;i++)
	{
		if(a[x]>b[y]){
			sumA+=a[x];
			x--;
		}
		else y--;
		if(a[x]<b[y])
		{
			sumB+=b[y];
			y--;
		}
		else x--;
	}
	cout<<sumA-sumB<<endl;
}
