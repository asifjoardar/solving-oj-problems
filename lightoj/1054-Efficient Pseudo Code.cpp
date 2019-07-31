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

ll pf(ll n,ll m)
{
    ll i,count=0;
    ll ans=1.0;
    while(n%2==0)
    {
        count++;
        n/=2;
    }
    if(count!=0)
    {
        ll num;
        num=(asif(2,(m*count)+1,MOD))%MOD;
        num=num%MOD;
        num--;
        ll num1=((num+MOD)%MOD);
        ans=(ans*num1)%MOD;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        count=0;
        while(n%i==0)
        {
            count++;
            n/=i;
        }
        if(count!=0)
        {
            ll num;
            num=(asif(i,(m*count)+1,MOD))%MOD;
            num=num%MOD;
            num--;
            ll num1=((num+MOD)%MOD);
            num1=((num1%MOD)*(asif1(i-1,MOD)))%MOD;
            ans=(ans*num1)%MOD;
        }
    }
    if(n>1){
        ll num;
        num=(asif(n,m+1,MOD))%MOD;
        num=num%MOD;
        num--;
            ll num1=((num+MOD)%MOD);
            num1=((num1%MOD)*asif1(n-1,MOD)%MOD)%MOD;
            ans=(ans*num1)%MOD;
    }
    return (ll)ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,n,m,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&n,&m);
        printf("Case %lld: %lld\n",i,pf(n,m)%MOD);
    }
    return 0;
}
