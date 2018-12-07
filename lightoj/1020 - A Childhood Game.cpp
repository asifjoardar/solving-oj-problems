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
	int i,n,t;
	char s[15];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>s;
		if(s[0]=='A')
		{
			if(n%3==0||n%3==2)
				printf("Case %d: %s\n",i+1,s);
			else
				printf("Case %d: %s\n",i+1,"Bob");
		}
		else
		{
			if(n%3==0)
				printf("Case %d: %s\n",i+1,"Alice");
			else
				printf("Case %d: %s\n",i+1,s);
		}
	}
}
