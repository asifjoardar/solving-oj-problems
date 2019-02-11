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
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    string s;
    ll i,j,k;
    set<string>ignore;
    while(getline(cin,s)&&s!="::")
    	ignore.insert(s);
    multimap<string,string>ans;
    while(getline(cin,s))
    {
    	for(i=0;i<s.size();i++)
    		s[i]=tolower(s[i]);
    	for(i=0;i<s.size();i++)
    	{
    		if(!isalpha(s[i]))
    			continue;
    		ll j=i;string s1;
    		while(j<s.size()&&isalpha(s[j]))
    		{
    			s1+=s[j];
    			j++;
    		}
    		if(!ignore.count(s1))
    		{
    			for(k=0;k<s1.size();k++)
    			{
    				s1[k]=toupper(s1[k]);
    			}
    			string s2(s);
    			s2.replace(i,s1.size(),s1);
    			ans.insert(makep(s1,s2));
    		}
    		i=j;
    	}
    }
    for(auto it=ans.begin();it!=ans.end();it++)
    	cout<<it->second<<endl;
}
