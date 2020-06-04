#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<ll,ll>
#define ss second
#define fs first
#define endl << "\n"
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
 
int main(){
	fio();
	ll n,i,num;
    cin>>n;
    vector<ll>ase;
    for(i=0;i<n;i++){
    	cin>>num;
        ll p=upper_bound(ase.begin(),ase.end(),num)-ase.begin();
        if(p==ase.size()) ase.pb(num);
        else{
        	ase[p]=num;
        }
    }
    cout<<ase.size() endl;
	return 0;
}
