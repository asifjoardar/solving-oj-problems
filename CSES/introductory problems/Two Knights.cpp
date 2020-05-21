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
	ll n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		ll num=((i*i)*((i*i)-1))/2;
		ll num1=4*(i-1)*(i-2);
		cout<<num-num1 endl;
	}
	return 0;
}
