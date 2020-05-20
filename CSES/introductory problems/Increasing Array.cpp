#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
using namespace std;

void sol(ll n){
	ll a[n],ans=0,i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<a[i-1]){
			ans+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
	}
	cout<<ans endl;
}

int main() {
	ll n;
	cin>>n;
	sol(n);
	return 0;
}
