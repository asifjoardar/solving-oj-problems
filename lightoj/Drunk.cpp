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

#define white 0
#define gray 1
#define black 2

vector<ll>g[10000];
map<ll,ll>color;
bool drunk;

void dfs(ll p){
    //cout<<p<<endl;
    color[p]=gray;
    for(ll i=0;i<g[p].size();i++){
        if(color[g[p][i]]==white)
            dfs(g[p][i]);
        else if(color[g[p][i]]==gray){
            drunk=false;
            return;
        }
    }
    color[p]=black;
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
        ll m,i,cnt=0;
        string s1,s2;
        map<string,ll>mp;
        cin>>m;
        for(i=0;i<m;i++){
            cin>>s1>>s2;
            if(!mp[s1]){
                cnt++;
                mp[s1]=cnt;
            }
            if(!mp[s2]){
                cnt++;
                mp[s2]=cnt;
            }
            g[mp[s1]].pb(mp[s2]);
        }
        drunk=true;

        for(i=1;i<=cnt;i++){
            if(color[i]==white)
                dfs(i);
            if(!drunk)
                break;
        }

        if(!drunk)
            pf("Case %lld: No\n",l);
        else
            pf("Case %lld: Yes\n",l);
        for(i=1;i<=cnt;i++){
            color[i]=white;
            g[i].clear();
        }
    }
    return 0;
}
