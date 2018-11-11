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
	int t;
	cin>>t;
	for(int l=1;l<=t;l++)
	{
		printf("Case %d:\n",l);
		int m,n,i,k=0,a;
		string s;
		cin>>m>>n;
		deque<int>q;
		for(i=0;i<n;i++)
		{
			cin>>s;
			if(s=="pushLeft")
			{
				cin>>a;
				if(k<m){
					q.push_front(a);
					printf("Pushed in left: %d\n",a);
					k++;
				}
				else if(k==m)
				{
					cout<<"The queue is full\n";
				}
			}
			else if(s=="pushRight")
			{
				cin>>a;
				if(k<m){
					q.push_back(a);
					printf("Pushed in right: %d\n",a);
					k++;
				}
				else if(k==m)
				{
					cout<<"The queue is full\n";
				}
			}
			else if(s=="popLeft")
			{
				if(k<=m&&k!=0)
				{
					printf("Popped from left: %d\n",q.front());
					k--;
					q.pop_front();
				}
				else if(k==0)
					cout<<"The queue is empty\n";
			}
			else if(s=="popRight")
			{
				if(k<=m&&k!=0)
				{
					printf("Popped from right: %d\n",q.back());
					k--;
					q.pop_back();
				}
				else if(k==0)
					cout<<"The queue is empty\n";
			}
		}
	}
}
