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
	int n,m,c,p;
	string s,s1;
	cin>>n>>m;
    p=n;
    if(n==1&&m==0){
    	cout<<0<< " " <<0<<endl;return 0;
    }
    if(m>n*9||m==0){
    	cout<<-1<< " " <<-1<<endl;return 0;
    }
    while(n--)
    {
        if(m>=9){s+=48+9;m-=9;}
        else {s+=48+m;m-=m;}
    }
    s1=s;
    reverse(s.begin(),s.end());
    if(s[0]=='0'){
    	for(int i=0;i<p;i++)
        	if(s[i]!='0'){
        		s[i]=s[i]-1;
        		s[0]='1';
        		break;
        	}
	}
    cout<<s<<" "<<s1;
}
