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
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 
 
ordered_set set1; 

ll lower_bound(ll x) 
{ 
    ll pos = set1.order_of_key(x);

    if (pos == set1.size()) {
        return -1;
    }
    else {
        ll element = *(set1.find_by_order(pos));
        return pos;
    }
}

int main()
{
    fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,n,s,e,ans=-1e10;
    cin>>n;
    vector<PII>v;
    set<ll>last;
    for(i=0;i<n;i++){
        cin>>s>>e;
        v.pb({s,e});
    }
    sort(v.begin(),v.end());
    set1.insert(v[0].ss);
    for(i=1;i<n;i++){
        ll p=v[i].fs;
        ll q=v[i].ss;
        ll pos=lower_bound(p);
        ll ase;
        if(pos==-1) ase=0;
        else ase=set1.size()-pos;
        ans=max(ans,ase+1);
        set1.insert(q);
    }
    cout<<ans<<endl;
    return 0;
}
