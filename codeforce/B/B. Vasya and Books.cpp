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
    int n,i,pos=0,x;
    cin>>n;
    int a[n],b[n+1]={0};
    for(i=0;i<n;i++) {cin>>a[i];b[a[i]]++;}
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	if(b[x]==0)
    		cout<<"0 ";
    	else if(x==a[pos]){
    		cout<<"1 ";
    		b[x]=0;
    		pos++;
    	}
    	else
    	{
    		int count=0;
    		while(pos<n)
    		{
    			count++;
    			b[a[pos]]=0;
    			pos++;
    			if(x==a[pos])
    			{
    				cout<<count+1<<" ";
    				b[x]=0;
    				pos++;
    				break;
    			}
    		}
    	}
    }
    cout<<endl;
}
