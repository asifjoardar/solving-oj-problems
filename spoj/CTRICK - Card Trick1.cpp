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

#define mx 20005
ll ar[mx+1],tree[mx+1];

ll read(ll idx)
{
    ll sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx & -idx);
    }
    return sum;
}

void update(ll idx,ll val)
{
    while(idx<=mx)
    {
        tree[idx]+=val;
        idx+=(idx & -idx);
    }
}

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
        ll a[n+1]={0};
        for(i=1;i<=n;i++){
            update(i,1);
        }
        ll pos=1,m=n;
        for(i=1;i<=n;i++)
        {
            pos=(pos+i)%m;
            if(pos==0)
                pos=m;
            m--;
            ll s=1,e=n;
            while(s<=e)
            {
                ll mid=(s+e)/2;
                ll q=read(mid);
                if(q>=pos) e=mid-1;
                else if(q<pos) s=mid+1;
            }
            a[s]=i;
            update(s,-1);
        }
        for(i=1;i<=n;i++)
            printf("%lld ",a[i]);
        cout<<endl;
    }
    return 0;
}
