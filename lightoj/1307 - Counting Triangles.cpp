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
    ll t,i,j,k,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        ll ans=0;
        vector<ll>a(n);
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n-1;k++)
            {
                auto it=upper_bound(a.begin(),a.end(),a[j]+a[k]);
                auto it1=lower_bound(a.begin(),a.end(),a[j]+a[k]);
                ll pos,mn=0;
                if(*it1==a[j]+a[k])
                {
                    mn=((it-a.begin()))-(it1-a.begin());
                }
                ans+=(it-a.begin()+1)-(k+1)-mn-1;
            }
        }
        printf("Case %lld: %lld\n",i,ans);
    }
}
