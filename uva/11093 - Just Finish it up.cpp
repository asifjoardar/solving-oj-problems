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
    int i,n,t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    	scanf("%d",&n);
    	int a[n+1],b[n+1],c[n+1];
    	int pos=0,sum=0;
    	for(i=0;i<n;i++) scanf("%d",&a[i]);
    	for(i=0;i<n;i++) scanf("%d",&b[i]);
    	for(i=0;i<n;i++){
    		c[i]=a[i]-b[i];
    		sum+=c[i];
    	}
    	printf("Case %d: ",j);
    	if(sum<0)
    		printf("Not possible\n");
    	else{
    		for(i=0;i<n;i++)
    		{
    			if(c[i]>0){
    				int count=0,pos=i;
    				while(pos<n){
    					int sum=0;
    					for(i=pos;i<n+pos;i++)
    					{
    						sum+=a[i%n];
    						if(sum>=b[i%n])
    						{
    							sum=(sum-b[i%n]);
    						}
    						else
    							break;
    						count++;
    					}
    					if(count==n)
    						break;
    					else
    						count=0;
    					pos++;
    				}
    				printf("Possible from station %d\n",pos+1);
    			}
    		}
    	}
    }
}
