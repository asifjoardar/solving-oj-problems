#include <bits/stdc++.h>
using namespace std;
int x[1005],n,m,q,p;
string s,t;
main()
{
	cin>>n>>m>>q>>s>>t;
	for(int i=0;i<=n-m;i++){
        if(s.substr(i,m)==t)
           ++p;
        x[i+1]=p;
	}
	while (q--)
	{
		int l,r;
		cin>>l>>r;
		if (r-l+1<m) cout<<"0\n";
		else cout<<x[r-m+1]-x[l-1]<<endl;
	}
}
