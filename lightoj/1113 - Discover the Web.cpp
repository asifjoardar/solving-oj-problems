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
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		printf("Case %d:\n",k);
		string v[500],str;
		v[0]="abc";
		v[1]="http://www.lightoj.com/";
		int j=2,i=2;string s;
		while(cin>>s)
		{
			if(s=="VISIT"){
				cin>>str;
				v[i++]=str;
				cout<<str<<endl;
				j=i;
			}
			else if(s=="BACK")
			{
				if(i-2>=1){
					cout<<v[i-2]<<endl;
					i--;
				}
				else
					cout<<"Ignored\n";
			}
			else if(s=="FORWARD")
			{
				if(/*v[i].size()*/i<j){
					cout<<v[i]<<endl;
					i++;
				}
				else
					cout<<"Ignored\n";
			}
			else
				break;
		}
	}
}
