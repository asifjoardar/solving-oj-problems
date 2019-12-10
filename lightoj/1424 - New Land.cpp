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
    //fio();
    ll t,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        ll i,j,n,m,ans1=0;
        cin>>n>>m;
        string s[n];
        vector<ll>v(m);
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='0')
                    v[j]++;
                else
                    v[j]=0;
            }
            stack<ll>s;
            ll ans=0;
            for(j=0;j<m;)
            {
                if(s.empty() or v[j]>=v[s.top()])
                {
                    s.push(j);
                    j++;
                }
                else
                {
                    ll p=s.top();
                    s.pop();
                    if(s.empty())
                        ans=max(ans,v[p]*j);
                    else
                        ans=max(ans,v[p]*(j-s.top()-1));
                }
            }
            while(!s.empty())
            {
                ll p=s.top();
                s.pop();
                if(s.empty())
                    ans=max(ans,v[p]*i);
                else
                    ans=max(ans,v[p]*(j-s.top()-1));
            }
            ans1=max(ans1,ans);
        }
        pf("Case %lld: %lld\n",k,ans1);
    }
    return 0;
}
