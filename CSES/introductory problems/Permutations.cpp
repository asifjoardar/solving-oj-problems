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
	ll i=5;
	if(n%2==0) i=n-1;
	for(;i>=1;i-=2)
	{
		cout<<i<<" ";
	}
	cout<<"4 2 ";
	for(i=6;i<=n;i+=2)
	    cout<<i<< " ";
	cout endl;
}

int main() {
	ll n;
	cin>>n;
	if(n==1) cout<<1 endl,exit(0);
	else if(n<4) cout<<"NO SOLUTION\n",exit(0);
	sol(n);
	return 0;
}
