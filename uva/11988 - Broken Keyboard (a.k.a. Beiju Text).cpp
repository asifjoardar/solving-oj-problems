/*
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
    while(cin>>s)
    {
        list<char>s1;
        list<char>::iterator it=s1.begin();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
                it=s1.begin();
            else if(s[i]==']')
                it=s1.end();
            else
                s1.insert(it,s[i]);
        }
        for(it=s1.begin();it!=s1.end();it++)
            cout<<*it;
        cout<<endl;
    }
}
*/
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
    int i;
    string s,str,str2,ans;
    while(cin>>s)
    {
    	for(i=0;i<s.size();i++)
    	{
    		if(s[i]!='['&&s[i]!=']')
    		str+=s[i];
    		else if(s[i]==']'){
    			ans+=str;
    			str.clear();
    		}
    		else
    		{
    			for(i=i+1;i<s.size();i++)
    			{
    				if(s[i]!='['&&s[i]!=']')
    					str2+=s[i];
    				else
    				{
    					i--;
    					break;
    				}
    			}
    			ans.insert(0,str2);
    			str2.clear();
    		}
    	}
    	ans+=str;
    	cout<<ans<<endl;
    	ans.clear();str.clear();
    }
}
