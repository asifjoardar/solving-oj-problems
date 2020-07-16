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
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

ll mss(ll a[],ll n){
    if(n==1) return a[0];
    ll m=n/2;
    ll l=mss(a,m);
    ll r=mss(a+m,n-m);
    ll lsum=INT_MIN,rsum=INT_MIN,sum=0;
    for(ll i=(m-1);i>=0;i--){
        sum+=a[i];
        lsum=max(lsum,sum);
    }
    sum=0;
    for(ll i=m;i<n;i++){
        sum+=a[i];
        rsum=max(rsum,sum);
    }
    ll ans=max(l,r);
    return max(ans,lsum+rsum);
}

int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,i;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<mss(a,n)<<endl;
    return 0;
}
