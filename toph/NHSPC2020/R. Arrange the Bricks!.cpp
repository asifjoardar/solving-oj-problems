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
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define SIZE 10000001
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

vector <ll> prime;
char sieve[SIZE];
void primeSieve ( ) {
    sieve[0] = sieve[1] = 1;
 
    prime.push_back(2);
    for ( ll i = 4; i <= 10000000; i += 2 ) sieve[i] = 1;
 
    ll sqrtn = sqrt ( 10000000 );
    for ( ll i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( ll j = i * i; j <= 10000000; j += 2 * i ) sieve[j] = 1;
        }
    }
 
    for ( ll i = 3; i <= 10000000; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}

//vector <ll> factors;
ll factorize( ll n ) {
    ll sqrtn = sqrt ( n ),ans=1,count=0;
    for ( ll i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        count=0;
        if ( n % prime[i] == 0 ) {
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                //factors.push_back(prime[i]);
                count++;
            }
            //cout<<prime[i]<<endl;
            sqrtn = sqrt ( n );
        }
        if(prime[i]==2) count++;
        if(count!=0)
            ans*=(count+1);
    }
    if ( n != 1 ) {
        ans*=2;
    }
    //cout<<prime[0]<<endl;
    return ans;
}

int main()
{
    
    fio();
    primeSieve();
    ll t;
    cin>>t;
    while(t--){
        ll a,a1,i,count=0,ans=1;
        cin>>a;
        if(a==1) cout<<1<<endl;
        else if(a<4) cout<<2<<endl;
        else{
            ans=factorize(a);
            cout<<(ans+1)/2<<endl;
        }
    }
    return 0;
}
