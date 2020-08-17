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
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    //fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,i,x,y,mx=1;
    cin>>n;
    ll ans[n]={0};
    vector<pair<PII,ll>>v;
    multimap<ll,ll>room;
    for(i=0;i<n;i++){
        cin>>x>>y;
        v.pb({{x,y},i});
    }
    sort(v.begin(),v.end());
    room.insert({v[0].fs.ss,1});
    //room[v[0].ss]=1;
    ans[v[0].ss]=1;
    for(i=1;i<v.size();i++){
        auto it=room.lower_bound(v[i].fs.fs);
        if(it==room.begin()){
            ans[v[i].ss]=room.size()+1;
            mx=max((ll)room.size()+1,mx);
            room.insert({v[i].fs.ss,room.size()+1});
        }
        else{
            it--;
            ll p=it->fs,q=it->ss;
            ans[v[i].ss]=q;
            room.erase(it);
            room.insert({v[i].fs.ss,q});
            //room[v[i].ss]=q;
        }
    }
    cout<<mx<<endl;
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
