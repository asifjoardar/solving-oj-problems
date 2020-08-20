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
 
 
int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,k,i,mx=0;
    cin>>n>>k;
    ll a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    if(n==k)
        cout<<mx<<endl,exit(0);
    ll l=0,r=1e18,cnt=0,sum=0,ans=1e18;
    while(l<=r){
        ll mid=l+(r-l)/2;
        cnt=0;
        sum=0;
        for(i=1;i<=n;i++){
            if(a[i]>mid){
                cnt=k+1;
                break;
            }
            if(sum+a[i]>mid){
                sum=0;
                cnt++;
            }
            sum+=a[i];
        }
        if(sum and sum<=mid)
            cnt++;
        
        if(cnt<=k){
            if(cnt==k)
                ans=min(ans,mid);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
