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

string s[9];
ll count1;
vector<pii>pos;

void chk(ll i){
	if(i==8){
		count1++;
		return;
	}
	for(ll j=0;j<8;j++){
		if(s[i][j]!='*'){
			bool ok=true;
			for(ll k=0;k<pos.size();k++){
				ll f=pos[k].fs;
				ll sec=pos[k].ss;
				if(f==i || sec==j || (abs(f-i)==abs(sec-j))){
					ok=false;break;
				}
			}
			if(ok){
				pos.pb({i,j});
				chk(i+1);
				pos.pop_back();
			}
		}
	}
}

int main(){
	ll i;
	for(i=0;i<8;i++) cin>>s[i];
	chk(0);
	cout<<count1 endl;
	return 0;
}
