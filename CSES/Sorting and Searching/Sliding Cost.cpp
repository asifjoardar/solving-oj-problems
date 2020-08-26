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
#include <ext/pb_ds/assoc_container.hpp>
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
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};
 
 
int main()
{
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,k,i,j,now=0;
    cin>>n>>k;
    ll a[n+1];
    ordered_set st;
    vector<ll>v;
    for(i=1;i<=n;i++){
        cin>>a[i];
        st.insert(a[i]);
        if(i>=k){
            ll what=((st.size())%2)?((st.size())/2)+1:((st.size())/2);
            v.pb(*(st.find_by_order(what-1)));
            st.erase(st.find_by_order(st.order_of_key(a[i-k+1])));
        }
    }
    j=0;
    ll mdl=v[0];
    for(i=1;i<=n;i++){
        now+=abs(a[i]-v[j]);
        if(i>=k){
            if(k%2)
                cout<<now<<" ";
            else{
                if(mdl==v[j]){
                    cout<<now<<" ";
                }
                else{
                    if(mdl<v[j]){
                        cout<<abs(now-abs(mdl-v[j]))<<" ";
                        now-=abs(mdl-v[j]);
                    }
                    else{
                        cout<<abs(now+abs(mdl-v[j]))<<" ";
                        now+=abs(mdl-v[j]);
                    }
                }
            }
            mdl=v[j];
            now-=abs(a[i-k+1]-v[j]);
            j++;
        }
    }
    return 0;
}
