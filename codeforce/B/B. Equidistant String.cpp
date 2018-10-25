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
    int i,count=0,f=0;
    string s1,s2,a;
    cin>>s1>>s2;
    for(i=0;i<s1.size();i++)
    {
    	if(s1[i]!=s2[i])
    	{
    		if(f==0)
    		{
    			a+=s1[i];
    			f=1;
    		}
    		else
    		{
    			a+=s2[i];
    			f=0;
    		}
    		count++;
    	}
    	else
    		a+=s1[i];
    }
    if(count%2==1)
    	cout<<"impossible\n";
    else
    	cout<<a<<endl;
}
