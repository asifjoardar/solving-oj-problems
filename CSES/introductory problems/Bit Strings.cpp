#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
using namespace std;

ll asif(ll n,ll p,ll d)
{
    ll x;
    if(p==0) return 1%d;
    if(p%2==0)
    {
        x=asif(n,p/2,d);
        return (x%d*x%d)%d;
    }
    else
        return ((n%d)*asif(n,p-1,d)%d)%d;
}

int main() {
	ll n;
	cin>>n;
	cout<<asif(2,n,1000000007) endl;
	return 0;
}
