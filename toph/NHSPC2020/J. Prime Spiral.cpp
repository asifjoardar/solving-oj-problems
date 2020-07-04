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
char sieve[20000001];
void primeSieve ( ) {
    sieve[0] = sieve[1] = 1;
 
    prime.push_back(2);
    for ( ll i = 4; i <= 20000000; i += 2 ) sieve[i] = 1;
 
    ll sqrtn = sqrt ( 20000000 );
    for ( ll i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( ll j = i * i; j <= 20000000; j += 2 * i ) sieve[j] = 1;
        }
    }
 
    for ( ll i = 3; i <= 20000000; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    primeSieve();
    ll n,q,i,j,k,cx,cy;
    cin>>n>>q;
    map<PII,ll>mp;
    if(n%2==0){
        mp[{n/2,n/2}]=1;
        cx=n/2;
        cy=n/2;
    }
    else{
        mp[{(n/2)+1,(n/2)+1}]=1;
        cx=(n/2)+1;
        cy=(n/2)+1;
    }
    ll cnt=1;
    for(i=2,j=0;i<=n*n;j++){
        if(j%4==0){
            for(k=0;k<cnt;k++,i++){
                cx++;
                mp[{cx,cy}]=i;
            }
        }
        else if(j%4==1){
            for(k=0;k<cnt;k++,i++){
                cy++;
                mp[{cx,cy}]=i;
            }
            cnt++;
        }
        else if(j%4==2){
            for(k=0;k<cnt;k++,i++){
                cx--;
                mp[{cx,cy}]=i;
            }
        }
        else{
            for(k=0;k<cnt;k++,i++){
                cy--;
                mp[{cx,cy}]=i;
            }
            cnt++;
        }
    }
    while(q--){
        ll x,y,x1,y1,shuru,ghor;
        cin>>x1>>y1;
        x=y1;
        y=n-x1+1;
        cout<<prime[mp[{x,y}]-1]<<endl;
    }
    return 0;
}
