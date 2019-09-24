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
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};
ll n,m;
string s[105],ans="ALLIZZWELL";
bool vis[105][105];

bool check(ll i,ll j,ll cnt)
{
    if(i<0 or i>=n or j<0 or j>=m or s[i][j]!=ans[cnt] or vis[i][j]==1)
        return false;
    return true;
}

bool dfs(ll i,ll j,ll cnt)
{
    if(cnt==10)
        return true;
    vis[i][j]=1;
    for(ll p=0;p<8;p++)
    {
        ll r=i+fx[p],c=j+fy[p];
        if(!check(r,c,cnt))
            continue;
        if(dfs(r,c,cnt+1))
        {
            vis[i][j]=0;
            return true;
        }
    }
    vis[i][j]=0;
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll i,j,k,t;
    cin>>t;
    while(t--)
    {
        ll f=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='A'&&dfs(i,j,1)==true)
                {
                    f=1;
                    break;
                }
            }
        }


        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
