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
    	int i,j=0,f=0;
    	string str,s,s1,str1;
    	pair<int,string>a[10000];
    	cin.ignore();
    	getline(cin,s);
    	getline(cin,s1);
    	
    	for(i=0;i<s.size();i++)
    	{
    		if(s[i]!=' '){
    			str+=s[i];
    			f=0;
    		}
    		else if(s[i]==' '&&f==0)
    		{
    			f=1;
    			a[j++].first=stoi(str);
    			str.clear();
    		}
    	}
    	if(f==0)
    	a[j++].first=stoi(str);
    	j=0,f=0;
    	for(i=0;i<s1.size();i++)
    	{
    		if(s1[i]!=' '){
    			str1+=s1[i];
    			f=0;
    		}
    		else if(s1[i]==' '&&f==0)
    		{
    			f=1;
    			a[j++].second=str1;
    			str1.clear();
    		}
    	}
    	if(f==0)
    	a[j++].second=str1;
    	s1.clear();
    	sort(a,a+j);
    	for(i=0;i<j;i++)
    		cout<<a[i].second<<endl;
    	if(t>0)
    		cout<<endl;
    }
}
