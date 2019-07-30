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

ll fact(ll n)
{
    ll count=0,i,f=0;
    while(n%2==0)
    {
        f=1;
        count++;
        n/=2;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        f=0;
        while(n%i==0)
        {
            f=1;
            n/=i;
            count++;
        }
    }
    if(n>1)
        count++;
    return count;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,i;
    ll a[1000005]={};
    a[0]=a[1]=0;
    for(i=2;i<=1000000;i++)
    {
        a[i]=a[i-1]+fact(i);
        //cout<<a[i]<<endl;
    }
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",a[n]);
    }
    return 0;
}
