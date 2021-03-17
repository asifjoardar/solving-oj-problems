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
#define inf 1e18
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

stack<ll>stk;
ll vis[100005];
vector<ll>g[100005],rev[100005],com;
ll n,m,ans;

void dfs1(ll s){
    for(ll i=0;i<g[s].size();i++){
        if(vis[g[s][i]]==0){
            vis[g[s][i]]=1;
            dfs1(g[s][i]);
        }
    }
    stk.push(s);
}

void dfs2(ll s){
    //cout<<s<<" ";
    com.pb(s);
    for(ll i=0;i<rev[s].size();i++){
        if(vis[rev[s][i]]==0){
            vis[rev[s][i]]=1;
            dfs2(rev[s][i]);
        }
    }
}

int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,l;
    sf("%lld",&t);
    for(l=1;l<=t;l++){
        ll i,u,v;
        ans=0;
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>u>>v;
            if(u!=v){
                g[u].pb(v);
                rev[v].pb(u);
            }
        }
        memset(vis,(ll)0,sizeof vis);
        for(i=1;i<=n;i++){
            if(vis[i]==0){
                vis[i]=1;
                dfs1(i);
            }
        }
        memset(vis,(ll)0,sizeof vis);
        while(!stk.empty()){
            if(vis[stk.top()]==0){
                vis[stk.top()]=1;
                dfs2(stk.top());
            }
            //cout<<endl;
            if(com.size()==1 and g[com[0]].size()!=0)
                ans++;
            com.clear();
            stk.pop();
        }
        pf("Case %lld: %lld\n",l,ans);
        for(i=1;i<=n;i++){
            g[i].clear();
            rev[i].clear();
        }
    }
    return 0;
}
