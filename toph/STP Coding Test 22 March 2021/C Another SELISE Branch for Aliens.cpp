#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll ans=0,d,x,y;

void dp(ll mypos,ll cost){
    if(mypos==d){
        ans=min(ans,cost);
        return;
    }
    if(mypos>d)
        return;
    if(mypos%2){
        dp(mypos*2,cost+x);
    }
    else{
        dp(mypos*2,cost+x);
        dp(mypos^(ll)1,cost+y);
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        cin>>d>>x>>y;
        if(d==1){
            cout<<y<<endl;
            continue;
        }
        if(d==2){
            cout<<x+2<<endl;
            continue;
        }
        ll mypos=2;
        ll cost=x+y;
        ans=INT_MAX;
        dp(mypos,cost);
        cout<<ans<<endl;
    }
    return 0;
}
