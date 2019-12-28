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

vector<char>ans;
ll k;
bool use[1000];
char s[200];
void ss(ll pos)
{
    if(ans.size()==k)
    {
        for(ll i=0;i<ans.size();i++)
            cout<<ans[i];
        cout<<endl;
        return;
    }
    for(ll i=pos;i<strlen(s);i++)
    {
        if(use[i]==false)
        {
            use[i]=true;
            ans.pb(s[i]);
            ss(i+1);
            use[i]=false;
            ans.pop_back();
        }
        while(s[i]==s[i+1]) i++;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll i,j;
    while(scanf("%s%lld",s,&k)==2)
    {
        memset(use,false,sizeof(use)) ;
        sort(s,s+strlen(s));
        ss(0);
        ans.clear();
    }
    return 0;
}
