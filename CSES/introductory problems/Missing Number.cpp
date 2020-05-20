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
	ll sum=0,num;
	for(ll i=1;i<n;i++)
	{
		cin>>num;
		sum+=num;
	}
	num=(n*(n+1))/2;
	cout<<num-sum<<endl;
}

int main() {
	ll t;
	cin>>t;
	sol(t);
	return 0;
}
