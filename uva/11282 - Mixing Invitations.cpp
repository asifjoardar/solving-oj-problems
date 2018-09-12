#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll d(ll n)
{
    if(n==0||n==2) return 1;
    if(n==1) return 0;
    return (n-1)*(d(n-1)+d(n-2));
}
ll fac(ll n)
{
    ll sum=1,i;
    for(i=1;i<=n;i++) sum*=i;
    return sum;
}
ll comb(ll a,ll b)
{
    ll sum1=fac(a);
    ll sum2=fac(b);
    ll sum3=fac(a-b);
    ll t=sum1/(sum2*sum3);
    return t;
}
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ll n,m,i;
    while(cin>>n>>m)
    {
        ll sum=0;
        sum+=d(n);
        for(i=1;i<=m;i++)
        {
            sum+=comb(n,i)*d(n-i);
        }
        cout<<sum<<endl;
    }
}
