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
void asif(string s)
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	string str;
	for(int i=0;i<s.size();i++)
	{
		if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')&&a==0){
			str+='1';
			a=1;b=0;c=0;d=0;e=0;f=0;
		}
		else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')&&b==0){
			str+='2';
			a=0;b=1;c=0;d=0;e=0;f=0;
		}
		else if((s[i]=='D'||s[i]=='T')&&c==0){
			str+='3';
			a=0;b=0;c=1;d=0;e=0;f=0;
		}
		else if((s[i]=='L')&&d==0){
			str+='4';
			a=0;b=0;c=0;d=1;e=0;f=0;
		}
		else if((s[i]=='R')&&e==0){
			str+='6';
			a=0;b=0;c=0;d=0;e=1;f=0;
		}
		else if((s[i]=='M'||s[i]=='N')&&f==0){
			str+='5';
			a=0;b=0;c=0;d=0;e=0;f=1;
		}
		else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y')
		{
			a=0;b=0;c=0;d=0;e=0;f=0;
		}
	}
	cout<<str<<endl;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(cin>>s)
    {
    	asif(s);
    }
}
