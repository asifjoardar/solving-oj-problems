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

string str="@IEHOVA#",s[10];
int vis[10],m,n;

void dfs(int x,int y,int z)
{
	if(x<0||y<0||x>=m||y>=n)
		return;
	if(s[x][y]!=str[z])
		return;

	if(s[x][y]=='#')
	{
		for(int i=0;i<z;i++)
		{
			if(i) cout<<" ";
			if(vis[i]==0)
				cout<<"forth";
			else if(vis[i]==1)
				cout<<"left";
			else
				cout<<"right";
		}
		cout<<endl;
		return;
	}

	vis[z]=0;
	dfs(x-1,y,z+1);
	vis[z]=1;
	dfs(x,y-1,z+1);
	vis[z]=2;
	dfs(x,y+1,z+1);
}
main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int t,i,j;
    cin>>t;
    while(t--)
    {
    	string str="@IEHOVA#";
    	cin>>m>>n;
    	for(i=0;i<m;i++)
    	{
    		cin>>s[i];
    	}
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			if(s[i][j]=='@')
    				dfs(i,j,0);
    		}
    	}
    }
}
