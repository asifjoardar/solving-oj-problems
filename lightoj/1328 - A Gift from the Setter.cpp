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
    ll t,l1;
    cin>>t;
    for(l1=1;l1<=t;l1++){
        ll k,c1,n,p,ans=0,i;
        cin>>k>>c1>>n>>p;
        ll a[n],b[n],c[n],d[n];
        a[0]=p;
        for(i=1;i<n;i++){
            a[i]=(((k*a[i-1])%1000007)+(c1%1000007))%1000007;
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            b[i]=abs(a[i+1]-a[i]);
        }
        c[0]=b[0];
        for(i=1;i<n-1;i++){
            c[i]=c[i-1]+b[i];
        }
        d[0]=c[0];
        for(i=1;i<n-1;i++){
            d[i]=d[i-1]+c[i];
        }
        ll prev=0,l=1,r=n-1,last=d[n-2];
        for(i=0;i<n-1;i++){
            p=(last-d[i])+c[i];
            p-=(prev*(r-l+1));
            ans+=p;
            prev=c[i];
            l++;
        }
        pf("Case %lld: %lld\n",l1,ans);
    }
    return 0;
}
