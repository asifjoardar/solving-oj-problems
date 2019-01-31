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
int adj[1005][1005],color[1005],color1[1005],node,edge;

void dfsvis(int x)
{
	int f;
	color[x]=gray;

	if(color1[x]==1){
		f=1;
	}
	else{
		f=0;
	}
	for(int i=0;i<node;i++)
	{
		if(adj[x][i]==1)
		{
			if(color[i]==white)
			{
				if(f==0){
					color1[i]=1;
					//f=1;
				}
				else{
					color1[i]=2;
				}
				dfsvis(i);
			}
		}
	}
}

void dfs()
{
	for(int i=0;i<node;i++)
	{
		color[i]=white;
		color1[i]=0;
	}
	color1[0]=1;
	for(int i=0;i<node;i++)
	{
		if(color[i]==white)
			dfsvis(i);
	}
	/*for(int i=0;i<node;i++)
		cout<<color1[i]<<endl;*/
	int p=0;
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			if(adj[i][j]==1)
			{
				if(color1[i]==color1[j])
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
    	dfs();
    }
}
