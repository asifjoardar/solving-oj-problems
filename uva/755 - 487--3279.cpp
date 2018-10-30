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
char asif(char s)
{
	if(s>='A'&&s<='C')
		return '2';
	else if(s>='D'&&s<='F')
		return '3';
	else if(s>='G'&&s<='I')
		return '4';
	else if(s>='J'&&s<='L')
		return '5';
	else if(s>='M'&&s<='O')
		return '6';
	else if(s=='P'||s=='R'||s=='S')
		return '7';
	else if(s>='T'&&s<='V')
		return '8';
	else if(s>='W'&&s<='Y')
		return '9';
}
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
    while(t--)
    {
    	int n,i,f=0;
    	string s,a,b,str;
    	cin>>n;
    	map<string,int>mp;
    	map<string,int>::iterator it;
    	while(n--)
    	{
    		cin>>s;
    		for(i=0;i<s.size();i++)
    		{
    			if(isdigit(s[i]))
    			{
    				if(a.size()<3)
    					a+=s[i];
    				else
    					b+=s[i];
    			}
    			if(isalpha(s[i]))
    			{
    				char c=asif(s[i]);
    				if(a.size()<3)
    					a+=c;
    				else
    					b+=c;
    			}
    		}
    		str+=a;str+='-';str+=b;
    		mp[str]++;
    		a.clear();
    		b.clear();
    		str.clear();
    	}
    	for(it=mp.begin();it!=mp.end();it++){
    		if(it->second>=2){
    			f=1;
    		cout<<it->first<<" "<<it->second<<endl;
    	}
    	}
    	if(f==0)
    		cout<<"No duplicates.\n";
    	if(t>0)
    		cout<<endl;
    }
}
