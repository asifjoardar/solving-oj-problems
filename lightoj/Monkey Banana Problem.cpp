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
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,l;
    sf("%lld",&t);
    for(l=1;l<=t;l++){
        ll i,j,p=1,num,n;
        cin>>n;
        ll a[(n*2)][n+1];
        for(i=0;i<(n*2);i++){
            for(j=0;j<=n;j++)
                a[i][j]=0;
        }
        for(i=1;i<(n*2);i++){
            if(i<=n){
                for(j=1;j<=i;j++){
                    cin>>a[i][j];
                }
            }
            else{
                for(j=1;j<(i-p);j++){
                    cin>>a[i][j];
                }
                p+=2;
            }
        }
        p=1;
        
        for(i=2;i<(n*2);i++){
            if(i<=n){
                for(j=1;j<=i;j++){
                    a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
                }
            }
            else{
                for(j=1;j<(i-p);j++){
                    a[i][j]+=max(a[i-1][j+1],a[i-1][j]);
                }
                p+=2;
            }
        }
        pf("Case %lld: %lld\n",l,a[(n*2)-1][1]);
    }
    return 0;
}
