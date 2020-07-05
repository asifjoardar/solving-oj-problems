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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t;
    sf("%lld",&t);
    while(t--){
        ll a,b,c,m,i,n,ans=0;
        sf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&m);
        vector<ll>arr;
        ll prev=b%m;
        deque<ll>mxn;
        a=a%m;
        c=c%m;
        for(i=1;i<=n;i++){
            ll num=((a*prev)+(c))%m;
            prev=num;
            if(num%2==1){
                arr.pb(num);
                if(mxn.empty()){
                    mxn.pb(num);
                    ans^=(num*2);
                }
                else{
                    ll mx=mxn[mxn.size()-1];
                    ll mn=mxn[0];
                    if(mn>=num)
                        mxn.push_front(num);
                    else if(mx<=num)
                    {
                        mxn.pb(num);
                    }
                    mx=mxn[mxn.size()-1];
                    mn=mxn[0];
                    ans^=(mx+mn);
                }
            }
            else{
                if(arr.empty()){
                    continue;
                }
                ll mx=mxn[mxn.size()-1];
                ll mn=mxn[0];
                if(arr[arr.size()-1]==mx){
                    mxn.pop_back();
                }
                else if(arr[arr.size()-1]==mn){
                    mxn.pop_front();
                }
                arr.pop_back();
                if(mxn.empty()){
                }
                else{
                    ll mx=mxn[mxn.size()-1];
                    ll mn=mxn[0];
                    ans^=(mx+mn);
                }
            }
        }
        pf("%lld\n",ans);
    }
    return 0;
}
