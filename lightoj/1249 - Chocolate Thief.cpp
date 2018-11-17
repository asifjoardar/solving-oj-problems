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
	int t,i,j,n,l,a,b,c;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		string s,str,str1;
		cin>>n;
		map<int,string>mp;
		map<int,string>::iterator it1;
		map<int,string>::reverse_iterator it;
		for(j=0;j<n;j++)
		{
			cin>>s>>a>>b>>c;
			mp.insert(pair<int,string>((a*b*c),s));
		}
		l=mp.size();
		if(l==1)
			printf("Case %d: no thief\n",i);
		else if(l==2&&n>2)
		{
			it=mp.rbegin();
			str=it->second;
			printf("Case %d: ",i);
			cout<<str;
			cout<<" took chocolate from all\n";
		}
		else
		{
			it1=mp.begin();it=mp.rbegin();
			str=it->second;str1=it1->second;
			printf("Case %d: ",i);
			cout<<str;
			cout<<" took chocolate from ";
			cout<<str1<<endl;
		}
	}
}
