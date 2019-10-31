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
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,i;
        scanf("%lld",&n);
        ll a[n]={0};
        vector<ll>dq,dq1;
        for(i=1;i<=n;i++){
            dq.pb(i);
            dq1.pb(i);
        }
        ll pos=0;
        for(i=1;i<=n;i++)
        {
            pos=(pos+i+1)%dq.size();
            if(pos==0)
                pos=dq.size();
            a[i-1]=dq[pos-1];
            pos--;
            auto it=find(dq.begin(),dq.end(),dq[pos]);
            dq.erase(it);
        }
        for(i=0;i<n;i++)
        {
            dq1[a[i]-1]=i+1;
        }
        for(i=0;i<n;i++)
            printf("%lld ",dq1[i]);
        cout<<endl;
    }
    return 0;
}
