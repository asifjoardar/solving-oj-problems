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
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
    	string s;
    	int count=0;
    	map<string,int>mp;
    	map<string,int>::iterator it;
    	while(1)
    	{
    		getline(cin,s);
    		if(s.compare("")==0)
    			break;
            mp[s]++;
    		count++;
    	}
    	for(it=mp.begin();it!=mp.end();it++)
    	{
            double p=it->second;
            cout<<it->first;
            printf(" %.4lf\n",(p/count)*100.0);
    	}
    	if(t)
    		cout<<endl;
    }
}
