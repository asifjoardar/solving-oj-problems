#include <bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	int i,n,m,pos;
	bool ok=false;
	vector<int>ans;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
	    cin>>s[i];
	cin>>m;
	int a[m];
	for(i=0;i<m;i++)
	{
		cin>>a[i];
        a[i]--;
	}
	for(i=0;i<m;i++)
	{
		int p1=a[i]/n;
		int p2=a[i]%n;
		if(s[p1][p2]=='c')
		{
			i++;
			ok=true;
                break;
		}
        //cout<<a[i]<<endl;
	}
	for(;i<m;i++)
	{
		int p1=a[i]/n;
		int p2=a[i]%n;
        //cout<<p1<<" "<<p2<<endl;
		if(s[p1][p2]=='a')
		{
			ans.pb(a[i]);
		}
	}
	if(ok)
	{
		cout<<"YES\n";
		for(i=0;i<ans.size();i++)
		    cout<<ans[i]+1<<" ";
		cout<<endl;
	}
	else
	    cout<<"NO\n";
	return 0;
}
