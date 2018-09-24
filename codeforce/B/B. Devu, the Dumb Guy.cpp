
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,sum=0;
    cin>>n>>m;
    ll *a=(ll*)malloc(n*sizeof(ll));
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		sum+=a[i]*m;
		if(m!=1)
			m--;
	}
	cout<<sum<<endl;
}
