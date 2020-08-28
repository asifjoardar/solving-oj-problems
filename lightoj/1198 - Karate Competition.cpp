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
    ll t,l,num;
    cin>>t;
    for(l=1;l<=t;l++){
        ll n,i,j,cnt=0,pos=0;
        cin>>n;
        multiset<ll>st;
        vector<ll>a(n),b(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(i=0;i<n;i++){
            bool ok=false;
            ll pos=-1;
            for(j=0;j<n;j++){
                if(a[i]>b[j] and a[i]!=0 and b[j]!=0){
                    ok=true;
                    pos=j;
                }
            }
            if(ok){
                a[i]=0;b[pos]=0;
                cnt+=2;
            }
        }
        for(i=0;i<n;i++){
            bool ok=false;
            ll pos=-1;
            for(j=0;j<n;j++){
                if(a[i]==b[j] and a[i]!=0 and b[j]!=0){
                    ok=true;
                    pos=j;
                }
            }
            if(ok){
                a[i]=0;b[pos]=0;
                cnt+=1;
            }
        }
        pf("Case %lld: %lld\n",l,cnt);
    }
    return 0;
}
