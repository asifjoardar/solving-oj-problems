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
    ll m,n,a=0,p,count,b;
    cin>>m>>n;
    	p=0;count=0;
    if(n==0)
    {
    	cout<<m<<" "<<m<<endl;
    	return 0;
    }
    if(m>=n*2)
    {
   		if(m%2==0)
   		{
   			a=((m/2)-n)*2;
   		}
   		else
   			a=(((m/2)-n)*2)+1;
   	}
    ll i=1;
    while(i<=m)
    {
    	if((i*(i-1))/2>=n)
    		break;
    	i++;
    }
    cout<<a<<" "<<m-i<<endl;
}
