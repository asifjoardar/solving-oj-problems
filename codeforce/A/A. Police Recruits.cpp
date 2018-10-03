        /** BiSmIlLaHiR rAhMaNiR rAhIm **\

*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	int n,p=0,count=0,i,a,ans=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a==-1)
			count++;
		else
		p+=a;
    if(count>0&&p==0)
    ans=max(count,ans);
	if(count>0)
	{
		count-=p;
		p=0;
	}
	}
	cout<<ans<<endl;
}
