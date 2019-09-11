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

vector<vector<int>>adj(10005);
int vis[10005],node,edge,dis[10005],pos;

int bfs(int sn,int maxdis)
{
    for(int i=0;i<=node;i++)
    {
        dis[i]=-1;
        vis[i]=0;
    }
    dis[sn]=0;
    vis[sn]=1;
    queue<int>q;
    q.push(sn);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<adj[x].size();i++)
        {
            if(vis[adj[x][i]]==0)
            {
                vis[adj[x][i]]=1;
                dis[adj[x][i]]=dis[x]+1;
                q.push(adj[x][i]);
            }
        }
    }
    for(int i=1;i<=node;i++)
    {
        if(maxdis<dis[i])
        {
            maxdis=dis[i];
            pos=i;
        }
    }
    return maxdis;
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    fio();
    int x,y,i;
    cin>>node;
    for(i=0;i<node-1;i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int ans1=bfs(1,-1);
    int ans2=bfs(pos,-1);
    cout<<max(ans1,ans2)<<endl;
    return 0;
}
