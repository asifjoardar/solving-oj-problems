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
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll i,n;
    cin>>n;
    ll a[n],ans[n]={0};
    set<PII>st;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-1;i>0;i--){
        if(!st.empty()){
            auto x=st.rbegin();
            PII y=*x;
            if(a[i]<y.fs){
                auto it=upper_bound(st.begin(),st.end(),makep(a[i],numeric_limits<ll>::max()));
                if(it!=st.end()){
                    for(auto it1=st.rbegin();it1!=st.rend();){
                        PII p=*it1,q=*it;
                        ans[p.ss]=i+1;
                        st.erase({p.fs,p.ss});
                        //it1=st.rbegin();
                        if(p.fs==q.fs and p.ss==q.ss) break;
                    }
                }
            }
        }
        if(a[i]>a[i-1]){
            ans[i]=i;
        }
        else{
            st.insert({a[i],i});
        }
    }
    if(!st.empty()){
        auto it=upper_bound(st.begin(),st.end(),makep(a[i],numeric_limits<ll>::max()));
        if(it!=st.end()){
            for(auto it1=st.rbegin();it1!=st.rend();){
                PII p=*it1,q=*it;
                ans[p.ss]=i+1;
                st.erase({p.fs,p.ss});
                //it1=st.rbegin();
                if(p.fs==q.fs and p.ss==q.ss) break;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
