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
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<int>adj[105];
int vis[105],dis[105];

void bfs(int sn)
{
	fill(vis,vis+105,0);
	fill(dis,dis+105,-1);
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
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    int t=1,i,j,x,y,n;
    while(cin>>n)
    {
    	for (auto &it : adj)
			fill(it.begin(), it.end(), 0);
		for(i=0;i<n;i++)
    	{
    		cin>>x;
    		adj[1].pb(x);
    		adj[x].pb(1);
    	}
    	for(i=2;i<=19;i++)
    	{
    		cin>>n;
    		for(j=0;j<n;j++)
    		{
    			cin>>x;
    			adj[i].pb(x);
    			adj[x].pb(i);
    		}
    	}
    	//if(t>1) cout<<endl;
    	pf("Test Set #%d\n",t++);
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    		cin>>x>>y;
    		bfs(x);
    		int ans=dis[y];
    		pf("%2d to %2d: %d\n",x,y,ans);
    	}
    	cout<<endl;
    }
}
