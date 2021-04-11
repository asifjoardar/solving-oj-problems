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

ll a,b,b1,m,countt,count1;

char sieve[1000005];

vector<ll>p,prime;

void primeSieve ( ll n ) {
    sieve[0] = sieve[1] = 1;
 
    prime.pb(2);
    for ( ll i = 4; i <= n; i += 2 ) sieve[i] = 1;
 
    ll sqrtn = sqrt ( n );
    for ( ll i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( ll j = i * i; j <= n; j += 2 * i )
                sieve[j] = 1;
        }
    }
 
    for ( ll i = 3; i <= n; i += 2 )
        if ( sieve[i] == 0 )
            prime.pb(i);
}

void factorize( ll n ) {
    ll sqrtn = sqrt ( n );
    for ( ll i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            bool ok=false;
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                ok=true;
            }
            if(ok)
                p.pb(prime[i]);
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        p.pb(n);
    }
}

void bitmask(ll n)
{
    ll ss=pow(2,n),i,j;
    for(i=1;i<ss;i++)
    {
        ll how=0,sum=1;
        for(j=0;j<n;j++)
        {
            if(i&(1<<j)){
                how++;
                sum*=p[j];
            }
        }
        if(how%2){
            countt+=(b/sum);
            count1+=(b1/sum);
        }
        else{
            countt-=(b/sum);
            count1-=(b1/sum);
        }
        
    }
    return;
}
int main()
{
    //fio();
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    primeSieve(1000005);
    ll l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        ll i,n;
        cin>>a>>b>>m;
        if(a==b){
            if(a==1)
                cout<<"Case "<<l<<": "<<1<<endl;
            else
                cout<<"Case "<<l<<": "<<0<<endl;
            continue;
        }
        if(b>a) swap(a,b);
        n=a-b;
        b1=b+m;
        b--;
        if(n!=0)
            factorize(n);
        countt=0;
        count1=0;
        bitmask(p.size());
        countt=b-countt;
        count1=b1-count1;
        cout<<"Case "<<l<<": "<<abs(count1-countt)<<endl;
        p.clear();
    }
    return 0;
}
