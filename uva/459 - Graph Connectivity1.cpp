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
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<vector<int>>adj(50);
int vis[50],node,parent[50];

void abc(int node)
{
	for(int i=0;i<node;i++){
		parent[i]=i;
		vis[i]=0;
	}
}

void dfs(int sn)
{
    for(int i=0;i<adj[sn].size();i++)
    {
        if(vis[adj[sn][i]]==0)
        {
            vis[adj[sn][i]]=1;
            parent[adj[sn][i]]=parent[sn];
            dfs(adj[sn][i]);
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
    int t;
    cin>>t;
    while(t--)
    {
    	for (auto &it : adj)
    		fill(it.begin(), it.end(), 0);
    	char c;
    	string s;
    	int p,q,i;
    	cin>>c;
    	cin.ignore();
    	node=c-'A'+1;
    	abc(node);
    	while(getline(cin, s) && s != "")
    	{
    		p=s[0]-'A';
    		q=s[1]-'A';
    		adj[p].pb(q);
    		adj[q].pb(p);
    	}
    	for(i=0;i<node;i++)
    	{
        	if(vis[i]==0)
        	{
            	vis[i]=1;
            	dfs(i);
        	}
		}

    	set<int>ans;
    	for(i=0;i<node;i++)
    		ans.insert(parent[i]);
    	cout<<ans.size()<<endl;
    	if(t)
            cout << endl;

    }
}
