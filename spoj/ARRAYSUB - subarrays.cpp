/** BiSmIlLaHiR rAhMaNiR rAhIm **\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
            \**  DIIT(17th batch) **/

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
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll n,i,k;
    cin>>n;
    vector<ll>ans,a(n);
    deque<PII>dq;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(i=0;i<n;i++)
    {
        while(1)
        {
            if(dq.empty())
            {
                dq.pb(makep(a[i],i));
                break;
            }
            else if(dq[dq.size()-1].first<=a[i]){
                dq.pop_back();
            }
            else{
                dq.pb(makep(a[i],i));
                break;
            }
            
        }
        if((!dq.empty())&&i-(k-1)>=0&&dq[0].second<(i-(k-1)))
                dq.pop_front();
        if(i>=k-1){
            ans.pb(dq[0].first);
        }
    }
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
