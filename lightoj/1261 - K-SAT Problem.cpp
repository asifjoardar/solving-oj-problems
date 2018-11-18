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
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t,l,i,j,n,m,k,dsize,x;
	cin>>t;
	for(l=1;l<=t;l++)
	{
		cin>>n>>m>>k;
		string s; int a1[50][50]; bool a[50][50],d[50];

		for(i=0;i<50;i++)
		{
			for(j=0;j<50;j++)
				a[i][j]=false;
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
			{
				cin>>s;
				if(s[0]=='-'){
					s.erase(s.begin());
					x=stoi(s);
					a[i][j]=false;
					a1[i][j]=x;
				}
				else{
					s.erase(s.begin());
					x=stoi(s);
					a[i][j]=true;
					a1[i][j]=x;
				}
			}
		}

		cin>>dsize;

		for(i=0;i<=50;i++)
			d[i]=false;

		for(i=0;i<dsize;i++)
		{
			cin>>x;
			d[x]=true;
		}

		int count=0;

		for(i=0;i<n;i++)
		{
			int f=0;
			for(j=0;j<k;j++)
			{
				
				x=a1[i][j];
				if(a[i][j]==d[x]){
					f=1;
				}
			}
			if(f==1)
				count++;
		}
		
		if(count==n)
			printf("Case %d: Yes\n",l);
		else
			printf("Case %d: No\n",l);
	}
}
