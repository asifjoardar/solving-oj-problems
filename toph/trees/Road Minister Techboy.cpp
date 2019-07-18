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
 
vector<vector<int>>adj(1005);
map<PII,ll>mp;
vector<ll>vis(1005);
ll val,node;

void dfs(int sn,int num)
{
    vis[sn]=1;
    if(num>val)
        val=num;
    for(int i=0;i<adj[sn].size();i++)
    {
        if(vis[adj[sn][i]]==0)
        {
            dfs(adj[sn][i],num+mp[{sn,adj[sn][i]}]);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        vector<vector<int>>adj1(1005);
        map<PII,ll>mp1;
        vector<ll>vis1(1005);
        swap(vis,vis1);
        swap(mp,mp1);
        swap(adj,adj1);
        cin>>node;
        ll sum=0,x,y,v;
        for(j=0;j<node-1;j++)
        {
            cin>>x>>y>>v;
            adj[x].pb(y);
            adj[y].pb(x);
            mp[makep(x,y)]=v;
            mp[makep(y,x)]=v;
            sum+=v;
        }
        val=0;
        dfs(1,0);
        val=val+((sum-val)*2);
        printf("Case %lld: %lld\n",i,val);
    }
    return 0;
}
