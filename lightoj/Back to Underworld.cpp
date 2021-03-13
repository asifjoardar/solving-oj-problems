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

#define sada 1
#define kala 2

vector<vector<ll>>g(100000);
ll vis[100005]={0},color[100005],s=0,k=0;

void bfs(ll sn, ll node)
{
    vis[sn]=1;
    queue<ll>q;
    q.push(sn);
    if(color[sn]==sada){
        color[sn]=kala;
        k++;
    }
    else{
        color[sn]=sada;
        s++;
    }
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(ll i=0;i<g[x].size();i++)
        {
            if(vis[g[x][i]]==0)
            {
                if(color[x]==sada){
                    color[g[x][i]]=kala;
                    k++;
                }
                else{
                    color[g[x][i]]=sada;
                    s++;
                }
                vis[g[x][i]]=1;
                q.push(g[x][i]);
            }
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
        ll m,u,v,i,cnt=0;
        cin>>m;
        map<ll,ll>mp;
        for(i=0;i<m;i++){
            cin>>u>>v;
            if(!mp[u]){
                cnt++;
                mp[u]=cnt;
            }
            if(!mp[v]){
                cnt++;
                mp[v]=cnt;
            }
            g[mp[u]].pb(mp[v]);
            g[mp[v]].pb(mp[u]);
        }
        ll ans=0;
        for(i=1;i<=cnt;i++){
            if(!vis[i]){
                s=0,k=0;
                bfs(i,cnt);
                ans+=max(s,k);
            }
        }
        pf("Case %lld: %lld\n",l,ans);
        for(i=0;i<=cnt;i++){
            g[i].clear();
            vis[i]=0;
            color[i]=0;
        }
        s=0,k=0;
    }
    return 0;
}
