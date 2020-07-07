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

deque <ll> prime;
char sieve[1001];
void primeSieve (  ) {
    sieve[0] = sieve[1] = 1;
 
    prime.push_back(2);
    for ( int i = 4; i <= 1000; i += 2 ) sieve[i] = 1;
 
    int sqrtn = sqrt ( 1000 );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= 1000; j += 2 * i ) sieve[j] = 1;
        }
    }
 
    for ( int i = 3; i <= 1000; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}

int main()
{
    //fio();
    ll i,fact=1,t,cnt=1;
    vector<ll>arr;
    primeSieve();
    for(i=0;i<prime.size();i++){
        if(fact*prime[i]>1000000000){
            arr.pb(fact);
            fact=1;
        }
        fact=fact*prime[i];
    }
    if(fact!=1) arr.pb(fact);
    cin>>t;
    while(t--){
        ll num,num1=1;
        vector<ll>pr,pr1;
        for(i=0;i<arr.size();i++){
            pf("? %lld\n",arr[i]);
            fflush(stdout);
            sf("%lld",&num);
            num1*=num;
            if(num!=1){
                ll f=0;
                while(num%2==0){
                    num/=2;
                    f=1;
                }
                if(f) pr.pb(2);
                for(ll j=3;j<sqrt(num);j+=2){
                    f=0;
                    while(num%j==0){
                        f=1;
                        num/=j;
                    }
                    if(f) pr.pb(j);
                }
                if(num!=1) pr.pb(num);
            }
        }
        num=num1;
        if(num==1)
        {
            pf("! %lld\n",num);
            fflush(stdout);
        }
        else{
            ll ans=1;
            for(i=0;i<pr.size();i++){
                num=1;
                while(1){
                    if(num*pr[i]>1000000000) break;
                    num*=pr[i];
                }
                pf("? %lld\n",num);
                fflush(stdout);
                sf("%lld",&num1);
                ans*=num1;
            }
            pf("! %lld\n",ans);
            fflush(stdout);
        }
    }
    return 0;
}
