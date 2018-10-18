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
ll count(ll n)
{
	ll sum1=0;
	string s=to_string(n);
	for(ll i=0;i<s.size();i++)
	{
		sum1+=(s[i]-'0');
	}
	return sum1;
}
int ans(ll n)
{
	ll x=n,sum=0,sum1=0,i,f=1;
	for(i=2;i<=sqrt(n);i++)
	{
        if(n%i==0){
            ll t=0;
            while(n%i==0) {
                t++;
                n/=i;
            }
            sum+=t*count(i);
            //cout<<sum<<endl;
            f=0;
        }
	}
	if(n>1) sum+=count(n);
	sum1=count(x);
	//cout<<sum<<" "<<sum1<<endl;
	if(sum==sum1&&f==0) return 0;
	else return 1;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=n+1;;i++)
		{
			if(ans(i)==0)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
}
