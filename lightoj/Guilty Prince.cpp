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

string s[50];
ll cnt,vis[50][50],n,m;

void dfs(ll x,ll y){
    //cout<<x<<" "<<y<<endl;
    
    if(s[x][y]=='#')
        return;
    if(vis[x][y])
        return;
    vis[x][y]=1;
    cnt++;
    if(x+1<m and s[x+1][y]!='#')
    	dfs(x+1,y);
    if(x-1>=0 and s[x-1][y]!='#')
    	dfs(x-1,y);
    if(y+1<n and s[x][y+1]!='#')
    	dfs(x,y+1);
    if(y-1>=0 and s[x][y-1]!='#')
    	dfs(x,y-1);
    return;
}

int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,l;
    sf("%lld",&t);
    for(l=1;l<=t;l++){
        ll i,j,x,y;
        cin>>n>>m;
        for(i=0;i<m;i++){
            cin>>s[i];
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(s[i][j]=='@'){
                    x=i;
                    y=j;
                }
            }
        }
        dfs(x,y);
        pf("Case %lld: %lld\n",l,cnt);
        cnt=0;
        for(i=0;i<n;i++){
            //cout<<s[i]<<endl;
            s[i].clear();
        }
        for(i=0;i<50;i++)
            for(j=0;j<50;j++)
                vis[i][j]=0;
    }
    return 0;
}
