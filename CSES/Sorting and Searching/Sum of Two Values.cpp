/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,k,i,p;
    cin>>n>>k;
    vector<PII>a;
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        cin>>p;
        a.pb({p,i+1});
        mp[p]=i+1;
    }
    sort(a.begin(),a.end());
    for(i=0;i<n and a[i].fs<=(k/2);i++){
        ll num=abs(a[i].fs-k);
        ll pos=mp[num];
        if(pos!=(a[i].ss) and pos!=0){
            cout<<min(pos,a[i].ss)<<" "<<max(pos,a[i].ss)<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}
