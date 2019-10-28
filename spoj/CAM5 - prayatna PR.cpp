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
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

vector<vector<int>>adj(100005);
int vis[100005],node,edge;

void dfs(int sn)
{
    for(int i=0;i<adj[sn].size();i++)
    {
        if(vis[adj[sn][i]]==0)
        {
            vis[adj[sn][i]]=1;
            dfs(adj[sn][i]);
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,i,x,y;
        memset(vis,0,sizeof(vis));
        for (auto &i : adj)
            fill(i.begin(), i.end(), 0);
        scanf("%d%d",&node,&edge);
        for(i=0;i<edge;i++)
        {
            scanf("%d%d",&x,&y);
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(i=0;i<node;i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                dfs(i);
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
