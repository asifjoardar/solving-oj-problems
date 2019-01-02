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
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,count=1,i,j,x,n;
	while(cin>>t)
	{
		if(t==0)
			break;

		map<int,int>mp;
		queue<int>q[1000],s;
		int team;
		string str;
		for(i=1;i<=t;i++)
		{
			cin>>n;
			for(j=0;j<n;j++)
			{
				cin>>x;
				mp[x]=i;
			}
		}
		cout<<"Scenario #"<<count<<endl;
		while(cin>>str)
		{
			if(str=="STOP")
				break;
			else if(str=="ENQUEUE")
			{
				cin>>x;
				team=mp[x];
				if(q[team].empty())
					s.push(team);
				q[team].push(x);
			}
			else{
				x=s.front();

				cout<<q[x].front()<<endl;
				q[x].pop();
				if(q[x].empty())
					s.pop();
			}
		}

		count++;
		cout<<endl;
	}
}
