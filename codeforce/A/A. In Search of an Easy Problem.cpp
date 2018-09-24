#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact(ll n)
{
	if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>a;
    	if(a==1)
    	{
    		cout<<"HARD\n";
    		return 0;
    	}
    }
    cout<<"EASY\n";
}
