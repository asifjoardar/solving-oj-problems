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
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	stack<char>l;
    	string s;
    	getline(cin,s);
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='('||s[i]=='[')
    			l.push(s[i]);
    		else if(s[i]==')')
    		{
                if(l.empty()||l.top()!='('){
                l.push('1');
                break;
            	}
            	l.pop();
    		}
    		else if(s[i]==']')
    		{
                if(l.empty()||l.top()!='[')
                {
                	l.push('1');
                	break;
            	}
            	l.pop();
    	    }
    	}
    	if(l.empty())
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
	}
}
