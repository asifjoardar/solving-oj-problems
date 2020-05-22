#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
using namespace std;

int main() {
	ll n,p,count,count1;
	cin>>n;
	p=2;
	while(n/p!=0){
		count+=n/p;
		p*=2;
	}
	p=5;
	while(n/p!=0){
		count1+=n/p;
		p*=5;
	}
	cout<<min(count,count1) endl;
	return 0;
}
