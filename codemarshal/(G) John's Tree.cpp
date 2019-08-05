#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll asif(ll n,ll p,ll d)
{
    ll x;
    if(p==0) return 1%d;
    if(p%2==0)
    {
        x=asif(n,p/2,d);
        return (x%d*x%d)%d;
    }
    else
        return ((n%d)*asif(n,p-1,d)%d)%d;
}

ll power(ll x, ll y, ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, m) % m;
    p = (p * p) % m;

    return (y%2 == 0)? p : (x * p) % m;
}

ll asif1(ll a, ll m)
{
   return power(a, m-2, m);
}

ll ans(ll d,ll v)
{
    if(v==1)
        return (1*d);
    ll p=asif(v,d,MOD)-1;
    p=(p+MOD)%MOD;
    return (ll)((p*asif1(v-1,MOD))%MOD);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,d,v,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&d,&v);
        if(d>1&&v==1)
            printf("Case %lld: -1\n",i);
        else if(d==1&&v==1)
            printf("Case %lld: 2\n",i);
        else
        {
            ll x=(1+((v%MOD)*(ans(d,v-1))%MOD)%MOD)%MOD;
            printf("Case %lld: %lld\n",i,x);
        }
    }
    return 0;
}
