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
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<ll>adj[105];
ll vis[105],node,edge,dis[105],parent[105];

void bfs(ll sn)
{
    fill(dis,dis+105,-1);
    fill(vis,vis+105,0);
    dis[sn]=0;
    vis[sn]=1;
    queue<ll>q;
    q.push(sn);
    while(!q.empty())
    {
    	ll x=q.front();
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
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll x,y,i,d,count=0,sn,t=1,p,q,f;
    
    while(cin>>edge){

    	for (auto &it : adj)
    		fill(it.begin(), it.end(), 0);

    	if(edge==0) break;
    	f=1;
    	count=0;
	    set<ll>s;
	    map<ll,ll>mp;
	    vector<PII>v;
	    for(i=0;i<edge;i++)
	    {
	        cin>>x>>y;
	        v.pb(makep(x,y));
	        s.insert(x);
	        s.insert(y);
	    }
	    for(auto it=s.begin();it!=s.end();it++)
	    {
	    	mp[*it]=f++;
	    }
	    for(auto it=v.begin();it!=v.end();it++)
	    {
	    	p=it->first;
	    	q=it->second;
	    	adj[mp[p]].pb(mp[q]);
	    	adj[mp[q]].pb(mp[p]);
	    }
	    while(cin>>sn>>d){
	    	count=0;
		    if(sn==0&&d==0) break;
		    bfs(mp[sn]);
		    for(auto it=s.begin();it!=s.end();it++)
		    {
		    	if(dis[mp[*it]]>d||dis[mp[*it]]<0)
		    		count++;
		    }
		    pf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",t++,count,sn,d);

		}
    }
}
