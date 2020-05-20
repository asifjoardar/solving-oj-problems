#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

void sol(ll n)
{
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	cout<<n<<" ";
	if(n%2==0){
        sol(n/2);
    }
	else{
        sol((n*3)+1);
    }
}

int main() {
	ll t;
	cin>>t;
	sol(t);
	return 0;
}
