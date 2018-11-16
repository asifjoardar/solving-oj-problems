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
#define ui unsigned int
using namespace std;
char a[1000][1000],b[1000][1000],tem[1000][1000];
int find(int n,int m)
{
	int i,j,k,l,ans=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m+i<=n&&m+j<=n)
			{
				int count=0;
				for(k=0;k<m;k++)
				{
					for(l=0;l<m;l++)
					{
						if(a[i+k][j+l]==b[k][l])
							count++;
					}
				}
				if(count==m*m)
					ans++;
			}
		}
	}
	return ans;
}
void roted(int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			tem[i][j]=b[m-j-1][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=tem[i][j];
		}
	}
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m,i;
	while(cin>>n>>m)
	{
		if(n==0&&m==0) break;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];
		for(i=1;i<=4;i++)
		{
			cout<<find(n,m);
			roted(m);
			if(i<4) cout<<" ";
			else if(i==4) cout<<endl;
		}
	}
}
