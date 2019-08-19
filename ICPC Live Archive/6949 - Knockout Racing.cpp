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
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll n,m,i,j,x,y,z;
    while(cin>>n>>m)
    {
        vector<PII>v;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(makep(x,y));
        }
        for(i=0;i<m;i++)
        {
            ll count=0,pos;
            cin>>x>>y>>z;
            for(j=0;j<n;j++)
            {
                ll p=v[j].second-v[j].first;
                ll q=z/p;
                ll q1=z%p;
                if(q%2==0)
                    pos=v[j].first+q1;
                else
                    pos=v[j].second-q1;
                if(pos>=x&&pos<=y)
                    count++;
            }
            cout<<count<<endl;
        }
    }
}
