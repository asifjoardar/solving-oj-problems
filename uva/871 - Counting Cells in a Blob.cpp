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
string s[50];
ll m,n,count1=0,vis[50][50];

void dfs(ll i,ll j)
{
    //cout<<i<<" "<<j<<endl;
    if(i<0||i>=n||j<0||j>=m){
        return;
    }

    if(s[i][j]=='0'||vis[i][j]==1)
        return;

    vis[i][j]=1;
    count1++;

    dfs(i+1, j);
    dfs(i+1, j-1);
    dfs(i+1, j+1);
    dfs(i-1, j);
    dfs(i-1, j+1);
    dfs(i-1, j-1);
    dfs(i, j+1);
    dfs(i, j-1);

}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll i,j,k,t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        for(i=0;i<50;i++)
        {
            for(j=0;j<50;j++)
                vis[i][j]=0;
        }
        n=0;m=0;count1=0;
        ll ans=0;

        while(getline(cin,s[n]))
        {
            if(s[n][0]=='\0')
                break;
            n++;
        }
        m=s[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='1'&&vis[i][j]!=1)
                {
                    count1=0;
                    dfs(i,j);
                    ans=max(ans,count1);

                }
            }
        }
        cout<<ans<<endl;
        if(t)
            cout<<endl;
    }
}
