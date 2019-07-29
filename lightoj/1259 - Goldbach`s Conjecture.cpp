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
         
bool p[10000001];
vector<ll>v;
void sieve()
{
    ll i,j;
    for(i=3;i<=10000000;i+=2)
    {
        p[i]=true;
    }
    p[0]=false;p[1]=false;p[2]=true;
    v.pb(2);
    for(i=3;i<=10000000;i+=2)
    {
        if(p[i]==true)
        {
            v.pb(i);
            for(j=3;j*i<=10000000;j++)
            {
                p[i*j]=false;
            }
        }
    }
            
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,i;
    sieve();
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ll num,j,count=0;
        cin>>num;
        for(j=0;v[j]<=num/2;j++)
        {
            ll x=num-v[j];
            if(p[x]==true)
                count++;
        }
        printf("Case %lld: %lld\n",i,count);
    }
    return 0;
}
     

