
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int asif(int a[],int p,int n)
{
	int m=-1,b[n-1],j=0;
	for(int i=0;i<n;i++)
		if(i!=p)
			b[j++]=a[i];
	for(int i=0;i<j-1;i++)
	{
		m=max(m,b[i+1]-b[i]);
	}
	return m;
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m=10000,n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=1;i<n-1;i++)
    {
    	m=min(m,asif(a,i,n));
    }
    cout<<m<<endl;
}
