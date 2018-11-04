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
    int n;
    while(cin>>n)
    {
    	if(n==0) break;
    	int l,count=0;
    	string s,str,ans;
    	cin>>s;
    	l=s.size();
    	l=l/n;
    	for(int i=0;i<s.size();i++)
    	{
    		str+=s[i];
    		count++;
    		if(count==l)
    		{
    			reverse(str.begin(),str.end());
    			ans+=str;
    			count=0;
    			str.clear();
    		}
    	}
    	cout<<ans<<endl;
    	ans.clear();
    	str.clear();
    }
}
