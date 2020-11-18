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
#define MOD 4294967296
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++){
        ll n,h,ta,td,i,ans=0;
        cin>>n>>h>>ta>>td;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(ta*2<=td){
            for(i=0;i<n;i++)
                ans+=ta;
        }
        else{
            ll i=0,j=n-1;
            sort(a,a+n);
            while(i<j){
                if(a[i]+a[j]>=h){
                    ans+=ta;
                    j--;
                }
                else{
                    ans+=td;
                    i++;
                    j--;
                }
            }
            if(i==j)
                ans+=ta;
        }
        cout<<"Case "<<l<<": "<<ans<<endl;
    }
    return 0;
}
