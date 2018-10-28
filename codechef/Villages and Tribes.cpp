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
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
    	int suma=0,sumb=0,count=0;
    	cin>>s;
    	for(i=0;i<s.size();i++)
    	{
    		if(s[i]=='A')
    		{
    			count=0;
    			suma+=1;
    			for(i=i+1;i<s.size();i++)
    			{
    				if(s[i]=='A')
    				{
    					suma+=count;
    					i--;
    					break;
    				}
    				else if(s[i]=='B'){
    					i--;
    					break;
    				}
    				count++;
    			}
    		}
    		else if(s[i]=='B')
    		{
    			count=0;
    			sumb+=1;
    			for(i=i+1;i<s.size();i++)
    			{
    				if(s[i]=='B')
    				{
    					sumb+=count;
    					i--;
    					break;
    				}
    				else if(s[i]=='A'){
    					i--;
    					break;
    				}
    				count++;
    			}
    		}
    	}
    	cout<<suma<<" "<<sumb<<endl;
    }
}
