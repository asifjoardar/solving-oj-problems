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
	ll t;
    cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		
		if((a+b)%3!=0 || (max(a,b)>=(min(a,b)*2))){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}
