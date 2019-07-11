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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,n,m,i;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        cin>>n>>m;
        ll a[n];
        ll lo=0,hi=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            lo=max(lo,a[i]);
            hi+=a[i];
        }
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            ll sum=0,count=0;
            for(i=0;i<n;i++)
            {
                if(sum+a[i]<=mid)
                    sum+=a[i];
                else
                {
                    sum=a[i];
                    count++;
                }
            }
            if(count<m)
                hi=mid-1;
            else
                lo=mid+1;
        }
        printf("Case %lld: %lld\n",j,lo);
    }
}
