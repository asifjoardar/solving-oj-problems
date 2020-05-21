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
		ll x,y,num,ans;
		cin>>x>>y;
		num=max(x,y);
		if(!(num&1))
		{
            //cout<<num endl;
			if(x>=y)
			    ans=(x*x)-(y-1);
			else{
				num=(y*y)-((y*2)-2);
				ans=num+(x-1);
			}
		}
		else{
			if(x<=y)
			    ans=(y*y)-(x-1);
			else{
				num=(x*x)-((x*2)-2);
				ans=num+(y-1);
			}
		}
		cout<<ans endl;
	}
	return 0;
}
