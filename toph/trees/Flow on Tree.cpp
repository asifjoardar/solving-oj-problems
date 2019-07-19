/** BiSmIlLaHiR rAhMaNiR rAhIm **\
 
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
 
            \**  DIIT(17th batch) **/
 
#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int parent[100005];
int rankparent[100005];

bool cmp(const pair<PII,ll> &a,const pair<PII,ll> &b)
{
    return a.second>b.second;
}
void init(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i]=i;
        rankparent[i]=1;
    }
}

ll findparent(ll x)
{
    if(x!=parent[x])
        return parent[x]=findparent(parent[x]);
    else
        return x;
}

ll unionset(ll x,ll y)
{
    ll px=findparent(x);
    ll py=findparent(y);
    ll p=rankparent[px]*rankparent[py];
    if(rankparent[px]<rankparent[py]){
        parent[px]=py;
        rankparent[py]+=rankparent[px];
    }
    else if(rankparent[px]>=rankparent[py]){
        parent[py]=px;
        rankparent[px]+=rankparent[py];
    }
    return p;
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    fio();
    ll t,i,j,n,x,y,z;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        vector<pair<PII,ll>>v;
        cin>>n;
        init(n);
        ll ans=0;
        for(j=0;j<n-1;j++)
        {
            cin>>x>>y>>z;
            v.pb(makep(makep(x,y),z));
        }
        sort(v.begin(),v.end(),cmp);
        for(j=0;j<n-1;j++)
        {
            ans+=v[j].second*unionset(v[j].first.first,v[j].first.second);
        }
        cout<<ans+ans<<endl;
    }
    return 0;
}
