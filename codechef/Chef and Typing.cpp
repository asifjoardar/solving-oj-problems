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
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
    	map<string,int>m;
    	int ans=0;
    	cin>>n;
    	while(n--)
    	{
    		int sum=0,p=0,q=0;
    		cin>>s;
    		for(i=0;i<s.size();i++)
    		{
    			if((s[i]=='d'||s[i]=='f')&&p==0){
    				sum+=2;
    				p++;
    				q=0;
    			}
    			else if((s[i]=='d'||s[i]=='f')&&p>0)
    			{
    				sum+=4;
    			}
    			else if((s[i]=='j'||s[i]=='k')&&q==0)
    			{
    				sum+=2;
    				q++;
    				p=0;
    			}
    			else if((s[i]=='j'||s[i]=='k')&&q>0)
    			{
    				sum+=4;
    			}
    		}
    		ans+=sum;
    		if(m[s]>0)
    			ans-=(sum/2);
    		else
    		m[s]++;
    	}
    	cout<<ans<<endl;
    }
}
