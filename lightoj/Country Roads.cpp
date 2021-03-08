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

ll infinity=1e9;

struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading 
    
};

void dijstkra(int n, vector<int>g[], vector<int>cost[], int s){
    int dist[n],i;
    for(i=0;i<n;i++)
        dist[i]=infinity;
    priority_queue<node>q;
    dist[s]=0;
    q.push(node(s,0));

    while(!q.empty()){
        node top=q.top();
        q.pop();
        int u=top.u;

        for(i=0;i<g[u].size();i++){
            ll v=g[u][i];
            if(max(dist[u],cost[u][i])<dist[v]){
                dist[v]=max(dist[u],cost[u][i]);
                q.push(node(v,dist[v]));
            }
        }
    }
    for(i=0;i<n;i++){
        if(dist[i]!=infinity)
            pf("%d\n",dist[i]);
        else
            pf("Impossible\n");
    }
}

int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t,l;
    sf("%d",&t);
    for(l=1;l<=t;l++){
        int node,edge,i,u,v,w,s;
        sf("%d%d",&node,&edge);
        vector<int>g[node+1],cost[node+1];
        for(i=0;i<edge;i++){
            sf("%d%d%d",&u,&v,&w);
            g[u].pb(v);
            g[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }
        printf("Case %d:\n",l);
        sf("%d",&s);
        dijstkra(node,g,cost,s);
    }
    return 0;
}
