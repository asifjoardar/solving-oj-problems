#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
using namespace std;

void sol(string s){
	ll ans=1,count=1;
	for(ll i=0;i<s.size()-1;i++)
	{
		if(s[i]!=s[i+1]){
		    ans=max(count,ans);
		    count=1;
		}
		else count++;
	}
	ans=max(count,ans);
	cout<<ans endl;
}

int main() {
	string s;
	cin>>s;
	sol(s);
	return 0;
}
