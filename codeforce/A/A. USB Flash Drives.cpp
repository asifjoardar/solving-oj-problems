
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
    int n,m,sum=0,count=0,count1=0;
    cin>>n>>m;
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(sum>=m) break;
		sum+=a[i];
		count++;
	}sum=0;
	for(int i=n-1;i>=0;i--)
	{
		if(sum>=m) break;
		sum+=a[i];
		count1++;
	}
	cout<<min(count,count1)<<endl;
}
