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
int adj[1005][1005],color[1005],color1[1005],node,edge,parent[1005];
void bfs(int sn)
{
	int f,i;
	for(i=0;i<node;i++)
	{
		color1[i]=white;
		parent[i]=-1;
		color[i]=0;
	}
	f=0;
	color[sn]=1;
	parent[sn]=0;
	queue<int>q;
	q.push(sn);
	while(!q.empty())
	{
		int x;
		x=q.front();
		q.pop();
		color1[x]=gray;
		if(color[x]==1){
			f=1;
		}
		else{
			f=0;
		}
		for(i=0;i<node;i++)
		{
			if(adj[x][i]==1){

				if(color1[i]==white)
				{
					q.push(i);
					if(f==0)
						color[i]=1;
					else
						color[i]=2;
					parent[i]=x;
				}
			}
		}
		color1[x]=black;
	}
	int p=0;
	for(i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			if(adj[i][j]==1)
			{
				if(color[i]==color[j])
				{
					p=1;
					break;
				}
			}
		}
	}
	if(p==1)
		cout<<"NOT BICOLORABLE.\n";
	else
		cout<<"BICOLORABLE.\n";
}
main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int i,x,y;
    while(cin>>node)
    {
    	if(node==0) break;
    	memset(adj,0,sizeof(adj[0][0])*205*205);
    	cin>>edge;
    	for(i=0;i<edge;i++)
    	{
    		cin>>x>>y;
    		adj[x][y]=1;
    		adj[y][x]=1;
    	}
    	bfs(0);
    }
}
