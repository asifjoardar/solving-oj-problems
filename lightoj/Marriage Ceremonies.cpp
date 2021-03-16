/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

ll dp[16][(1<<16)],n,a[16][16];

ll solve(ll i,ll mask){
    if(i==n)
        return 0;
    if(dp[i][mask]!=-1)
        return dp[i][mask];
    ll ans=INT_MIN;
    for(ll j=0;j<n;j++){
        if(mask&(1<<j)){
            ans=max(ans,a[i][j]+solve(i+1,mask^(1<<j)));
        }
    }
    return dp[i][mask]=ans;
}

int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,l;
    sf("%lld",&t);
    for(l=1;l<=t;l++){
        ll i,j;
        cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>a[i][j];
        }
        memset(dp,-1,sizeof dp);
        pf("Case %lld: %lld\n",l,solve(0,(1<<n)-1));
    }
    return 0;
}
