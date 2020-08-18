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
    ll n,k,i,cnt=0;
    cin>>n;
    k=n;
    ll a[n+1],prfx[n+1]={0};
    map<ll,ll>mp;
    for(i=1;i<=n;i++){
        cin>>a[i];
        prfx[i]=a[i]+prfx[i-1];
    }
    mp[0]=1;
    for(i=1;i<=n;i++){
        //cout<<prfx[i]<<endl;
        cnt+=mp[prfx[i]%k];
        if(prfx[i]%k<0){
            ll p=k-abs(prfx[i]%k);
            cnt+=mp[p];
        }
        else{
            ll p=-1*(k-(prfx[i]%k));
            cnt+=mp[p];
        }
        mp[prfx[i]%k]++;
    }
    cout<<cnt<<endl;
    return 0;
}
