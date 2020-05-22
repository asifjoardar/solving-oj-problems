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
	ll n,i,j,k,sum,sum1;
	vector<ll>ans;
	cin>>n;
	i=1;j=n;
	sum=(n*n+n)/2;
	if(sum%2==0){
        sum=sum/2;
        ll num;
		for(i=1;i<=n;i++){
			sum1+=i;
			if(sum1>sum){
				num=sum1-sum;
				break;
			}
		}
        cout<<"YES\n";
		cout<<i-1 endl;
		for(j=1;j<=i;j++){
			if(j==num) continue;
			cout<<j<<" ";
		}
		cout endl;
		cout<<n-(i-1) endl;
		cout<<num<<" ";
		for(j=i+1;j<=n;j++){
			cout<<j<<" ";
		}
		cout endl;
	}
	else
	    cout<<"NO\n";
	return 0;
}
