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
#define inf 1e18
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    //fio();
    ll l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        ll a,b,ans;
        cin>>a>>b;
        if(a==1 or b==1){
            ans=max(a,b);
        }
        else if(a==2 or b==2){
            ll p1,p2;
            p1=max(a,b)/4;
            p2=max(a,b)%4;
            ans=p1*4;
            if(p2>1)
                ans+=4;
            else if(p2!=0)
                ans+=2;
        }
        else if(b%2){
            ll p1,p2;
            p1=(b+1)/2;
            p2=b/2;
            if(a%2){
                ans=((a+1)/2)*p1;
                ans+=(a/2)*p2;
            }
            else{
                ans=(a/2)*p1;
                ans+=(a/2)*p2;
            }
        }
        else{
            ans=(b/2)*a;
        }
        cout<<"Case "<<l<<": "<<ans<<endl;
    }
    return 0;
}

