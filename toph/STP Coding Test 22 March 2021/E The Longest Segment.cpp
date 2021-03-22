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

int main()
{
    ll n,k,ans=0,cnt=0,i,j;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    set<PII>st1;
    i=0;j=0;
    st1.insert({a[0],0});
    while(i<=j and j<n){
        auto mn=st1.begin();
        auto mx=st1.rbegin();
        if(((mx->first)-(mn->first))<=k){
            j++;
            cnt++;
            st1.insert({a[j],j});
        }
        else{
            ans=max(ans,cnt);
            cnt--;
            st1.erase({a[i],i});
            i++;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    return 0;
}
