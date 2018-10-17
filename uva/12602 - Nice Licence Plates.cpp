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
ll asif(string s)
{ 
    ll n=0; 
    for(ll i=2,j=0;i>=0;i--,j++) 
    {     
        n+=pow(26,i)*(s[j]-65);
    }
    return n;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,p,q;
	cin>>t;
	while(t--)
	{
		string s,s1,s2;
		cin>>s;
		s1+=s[0];s1+=s[1];s1+=s[2];
		p=asif(s1);
		s2+=s[4];s2+=s[5];s2+=s[6];s2+=s[7];
		q=stoi(s2);
		if(abs(q-p)<=100)
			cout<<"nice\n";
		else
			cout<<"not nice\n";
	}
}
