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

bool cmp(PII &a, PII &b){
    return a.ss<b.ss;
}

int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,k,x,y,i,ans=1;
    cin>>n>>k;
    vector<PII>v;
    multiset<ll>st;
    for(i=0;i<n;i++){
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    st.insert(v[0].ss);
    k--;
    for(i=1;i<n;i++){
        auto it=st.upper_bound(v[i].fs);
        if(it!=st.begin()){
            ans++;
            it--;
            st.erase(it);
            st.insert(v[i].ss);
        }
        else if(k){
            ans++;
            st.insert(v[i].ss);
            k--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
