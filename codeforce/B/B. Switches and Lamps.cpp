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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,j;
    string s;
    vector<string>v;
    cin>>n>>m;
    int a[m]={0};
    for(i=0;i<n;i++)
    {
    	cin>>s;
    	v.push_back(s);
    	for(j=0;j<m;j++)
    		if(s[j]=='1')
    			a[j]++;
    }
    for(i=0;i<n;i++)
    {
    	s=v[i];
    	int f=1;
    	for(j=0;j<m;j++)
    	{
    		if(s[j]=='1'&&a[j]==1)
    		{
    			f=0;
    		}
    	}
    	if(f==1)
    	{
    		cout<<"YES\n";
   			return 0;
   		}
    }
    cout<<"NO\n";
}
