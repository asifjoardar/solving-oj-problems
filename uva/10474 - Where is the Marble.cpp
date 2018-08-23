#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m,i,p,x,j,k=1;
    while(cin>>n>>m){
    int a[n];
    if(n==0&&m==0) break;
    for(i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
    printf("CASE# %d:\n",k++);
    for(i=0;i<m;i++)
    {
    	p=-1;
    	cin>>x;
    	for(j=0;j<n;j++)
    	{
    		if(a[j]==x)
    		{
    			cout<<x<<" found at "<<j+1<<endl;
    			p=1;
    			break;
    		}
    		if(a[j]>x) break;
    	}
    	if(p==-1) cout<<x<<" not found\n";
    }
    }
}
