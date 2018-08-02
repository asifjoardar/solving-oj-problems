#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll p) {
	if(p<10) return p;
	ll r=p/10+9,f=p;
	while(f>=10) f/=10;
	if(f>p%10) r--;
	return r;
}
int main() {
	ll m,n;
	cin>>m>>n;
	cout<<f(n)-f(m-1)<<endl;
	return 0;
}
