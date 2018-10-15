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
int test(int n)
{
	int a[200],i,j=0;
	memset(a,0,sizeof(a));
	while (n%2 == 0)
    {
        a[j++]=2;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            a[j++]=i;
            n = n/i;
        }
    }
    if (n > 2)
        a[j++]=n;
    for(i=0;i<j;i++)
    {
        //cout<<a[i]<<endl;
        //cout<<a[i]<<endl;
        if(a[i]==a[i+1])
        return 0;
    }
    //cout<<endl;
    if(j==2)
    return 1;
    else
    return 0;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int f=0;
		if(n<12) cout<<"NO\n";
		else
		{
			for(i=2;i<=n/2;i++)
			{
				int x=test(i);
				int y=test(n-i);
				if(x==1&&y==1)
				{
					//cout<<i<<" "<<n-i<<endl;
					cout<<"YES\n";
					f=1;
					break;
				}
			}
			if(f==0)
			cout<<"NO\n";
		}
	}
}
