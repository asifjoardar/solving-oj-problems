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
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

void lis(vector<ll>a)
{
    ll n=a.size(),i,j;
    ll ans=0,p;
    vector<ll>dp(n,1),pos(n,-1),fans;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j]&&dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
                pos[i]=j;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(dp[i]>ans)
        {
            ans=dp[i];
            p=i;
        }
    }
    cout<<"Max hits: "<<ans<<endl;
    for(i=0;i<ans;i++)
    {
        fans.pb(a[p]);
        p=pos[p];
    }
    for(i=ans-1;i>=0;i--)
        cout<<fans[i]<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        string s;
        vector<ll>a;
        ll n=0;
        while(getline(cin, s))
        {
            if(s[0] == '\0')
                break;
            stringstream ss(s);
            int m;

            ss >> m;
            a.push_back(m);
        }
        lis(a);
        if(t)
        cout<<endl;
    }
    return 0;
}
