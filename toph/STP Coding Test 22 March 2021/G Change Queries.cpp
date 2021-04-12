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

vector<vector<ll>>adj(200005);
ll vis[200005],n,start[200005],finish[200005],Time=0,cost[200005];
vector<ll>v,v1;

void dfs(ll sn)
{
    start[sn]=Time++;
    for(ll i=0;i<adj[sn].size();i++)
    {
        if(vis[adj[sn][i]]==0)
        {
            vis[adj[sn][i]]=1;
            dfs(adj[sn][i]);
        }
    }
    finish[sn]=Time;
    v.pb(cost[sn]);
    v1.pb(sn);
}

ll tree[200005 * 3];
void init(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = v[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(ll node, ll b, ll e, ll i, ll newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    //fio();
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll x,y,i,q,k,c,w;
    cin>>n>>q;
    for(i=1;i<=n;i++){
        cin>>cost[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    v.pb(0);
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            dfs(i);
        }
    }
    map<ll,ll>mp;
    for(i=0;i<n;i++)
        mp[v1[i]]=i+1;

    vector<ll>workers;
    for(i=1;i<=n;i++){
        workers.pb(finish[i]-start[i]);
    }
    init(1, 1, n);
    while(q--){
        cin>>k;
        if(k==1){
            cin>>w>>c;
            update(1, 1, n, mp[w], c);
        }
        else{
            cin>>w;
            cout << query(1, 1, n, mp[w]-((finish[w])-start[w]-1), mp[w]) << endl;
        }
    }
    return 0;
}
