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
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

ll bigmodRecur ( ll b, ll p, ll m ) {
    if ( p == 0 ) return 1%m;
 
    if ( p % 2 == 0 ) {
        ll y = bigmodRecur ( b, p / 2, m );
        return ( y * y ) % m;
    }
    else {
        return ( b * bigmodRecur ( b, p - 1, m ) ) % m;
    }
}

vector <ll> prime;
char sieve[SIZE+1];
void primeSieve () {
    sieve[0] = sieve[1] = 1;
 
    prime.push_back(2);
    for ( ll i = 4; i <= SIZE; i += 2 ) sieve[i] = 1;
 
    ll sqrtn = sqrt ( SIZE );
    for ( ll i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( ll j = i * i; j <= SIZE; j += 2 * i ) sieve[j] = 1;
        }
    }
 
    for ( ll i = 3; i <= SIZE; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}

ll SOD( ll n ,ll k ) {
    ll res = 1;
    ll sqrtn = sqrt ( n );
    for ( ll i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            ll tempSum = 1; // Contains value of (p^0+p^1+...p^a)
            ll count=0;
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                count++;
                tempSum = ((tempSum%MOD) + (bigmodRecur(prime[i],count*k,MOD)%MOD))%MOD;
            }
            sqrtn = sqrt ( n );
            res = ((res%MOD) * (tempSum%MOD))%MOD;
        }
    }
    if ( n != 1 ) {
        res = ((res%MOD) * ((bigmodRecur(n%MOD,k,MOD)%MOD)+1 )%MOD)%MOD; // Need to multiply (p^0+p^1)
    }
    return res%MOD;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    primeSieve();
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i;
        cin>>n>>k;
        cout<<SOD(n,k)<<endl;
    }
    return 0;
}
