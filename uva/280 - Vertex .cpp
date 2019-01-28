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
int ans[105];
int vis[150];
void bfs(int sn,vector<int>adj[])
{
	int i;
	queue<int>q;
	q.push(sn);
	while(!q.empty())
	{
		int x;
		x=q.front();
		q.pop();
		for(i=0;i<adj[x].size();i++)
		{
			ans[adj[x][i]]=1;
			if(vis[adj[x][i]]==0)
			{
				vis[adj[x][i]]=1;
				q.push(adj[x][i]);
			}
		}
	}
}

void asif(int node)
{
	int i,count=0;
	vector<int>ans1;

	for(i=0;i<node;i++)
	{
		//cout<<vis[i]<<endl;
		if(ans[i]==0)
		{
			ans1.pb(i+1);
			count++;
		}
	}
	if(count==0)
		cout<<0<<endl;
	else
	{
		cout<<count<<" ";
		for(i=0;i<ans1.size()-1;i++)
			cout<<ans1[i]<<" ";
		cout<<ans1[ans1.size()-1]<<endl;
	}
}

main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    fio();
    int node,x,p,y,i,j,n;
    while(cin>>node)
    {
    	vector<int>adj[node];
    	if(node==0) break;
    	while(cin>>x){
    		if(x==0) break;
	    	while(cin>>y)
	    	{
	    		if(y==0) break;
	    		adj[x-1].pb(y-1);
	    	}
	    }
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    		for(j=0;j<105;j++)
            {
                ans[j]=0;
                vis[j]=0;
            }
    		cin>>p;
    		bfs(p-1,adj);
    		asif(node);
    	}
    }
}
