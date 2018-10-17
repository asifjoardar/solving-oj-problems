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
void asif(string s)
{
	string s1;
	ll n=stoi(s);
	//sscanf(s,"%lld",&n);
	while(n!=0) 
    {    
        ll temp  = 0;  
        temp = n % 16; 
        if(temp < 10) 
        { 
            s1+=(temp+48); 
        } 
        else
        { 
            s1+=(temp+55); 
        } 
        n=n/16; 
    }
    reverse(s1.begin(),s1.end());
    cout<<"0x";
    cout<<s1<<endl; 
}
void asif1(string s)
{
	ll l=s.size(),b=1; 
    ll n=0; 
    for(ll i=l-1;i>=0;i--) 
    {     
        if(s[i]>='0'&&s[i]<='9') 
        { 
            n+=(s[i]-48)*b; 
            b*=16; 
        } 
        else if(s[i]>='A'&&s[i]<='F') 
        { 
            n+=(s[i]-55)*b;  
            b*=16; 
        } 
    }
    cout<<n<<endl;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	while(cin>>s)
	{
		if(s[0]=='-') break;
		if(s.size()==1) cout<<"0x"<<s<<endl;
		else
		{
			if(s[1]!='x')
			{
				asif(s);
			}
			else
			{
				s.erase(s.begin() + 0, s.begin()+2);
				asif1(s);
			}
		}
	}
}
