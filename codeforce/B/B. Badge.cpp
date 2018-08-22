#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,p,i;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
    	int b[n+1]={0};
    	p=i;
    	while(b[p]<1)
    	{
    		b[p]=1;
    		p=a[p];
    	}
    	cout<<p<<" ";
    }
	cout<<endl;
}
