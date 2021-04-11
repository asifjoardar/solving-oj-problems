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
    //fio();
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++){
        ll n,i,j,ans=0,negmx=INT_MIN,neg=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0)
                ans+=a[i];
            else{
                neg++;
                negmx=max(negmx,a[i]);
            }
        }
        ll count=0;

        for(i=0;i<n;){
            if(a[i]>0){
                j=i;
                count++;
                while(a[j]>=0&&j<n){
                    j++;
                }
                i=j;
            }
            else
                i++;
        }
        if(count>0)
            count--;
        if(neg==n)
            ans=negmx;
        pf("Case %lld: %lld %lld\n",l,ans,count);
    }
    return 0;
}
