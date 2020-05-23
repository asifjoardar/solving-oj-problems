#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll sum,fsum,a[100],n,ans=1e10;

void bk(ll i,ll sum){
	if(i==n){
		ll num=abs(fsum-(2*sum));
		ans=min(ans,num);
        return;
	}
	bk(i+1,sum);
	bk(i+1,sum+a[i]);
}

main()
{
	fio();
	ll i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		fsum+=a[i];
	}
	bk(0,0);
	cout<<ans endl;
	return 0;
}
