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
	int m,n,i,x[4]={0};
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		x[a[i]]++;
	}
	m=min(x[1],min(x[2],x[3]));
	cout<<m<<endl;
	int p=0,q=0,r=0;
	while(m>0){
	for(i=0;i<n;i++)
	{
		if(a[i]==1&&p==0){
			cout<<i+1<<" ";
			p++;
			a[i]=0;
		}
		else if(a[i]==2&&q==0)
		{
			cout<<i+1<<" ";
			q++;
			a[i]=0;
		}
		else if(a[i]==3&&r==0)
		{
			cout<<i+1<<" ";
			r++;
			a[i]=0;
		}
	}
	if(p>0&&q>0&&r>0)
		{
			p=0;q=0;r=0;
			m--;
			cout<<endl;
		}
	}
}
