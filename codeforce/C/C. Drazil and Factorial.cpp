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
    int n,i;
    string s,s1;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
    	if(s[i]=='2')
    		s1+='2';
    	else if(s[i]=='3')
    		s1+='3';
    	else if(s[i]=='4')
    		s1+="322";
    	else if(s[i]=='5')
    		s1+='5';
    	else if(s[i]=='6')
    		s1+="53";
    	else if(s[i]=='7')
    		s1+='7';
    	else if(s[i]=='8')
    		s1+="7222";
    	else if(s[i]=='9')
    		s1+="7332";
    }
    sort(s1.begin(),s1.end());
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
}
