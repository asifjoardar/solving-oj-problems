#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	ll i,n,k,num,p,ans=0;
	cin>>n>>k;
	vector<ll>a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<n;i++)
	{
		num=k-a[i];
		p=lower_bound(a.begin()+(i+1),a.begin()+n,num)-a.begin();
        //cout<<p<<endl;
		p=p-(i+1);
		ans+=p;
	}
	cout<<ans<<endl;
	return 0;
}
