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
#define PII pair<int, int>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void makeset(ll p[],ll r[],ll n)
{
    for(int i=0;i<n;i++)
        p[i]=i,r[i]=1;
}

ll findrep(ll p[],int x)
{
    if(p[x]==x) return x;
    else{
        return p[x]=findrep(p,p[x]);
    }
}

void unionset(ll p[],ll r[],ll x,ll y)
{
    ll u=findrep(p,x);
    ll v=findrep(p,y);
    if(u==v)
        return;
    else
    {
        p[u]=p[y];
        r[v]+=r[u];
    }
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll t;
    cin>>t;
    while(t--)
    {
        ll p[100000],r[100000],n,j=1,p1;
        string s,s1;
        makeset(p,r,100000);
        cin>>n;
        map<string,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>s>>s1;
            if(mp[s]==0)
                mp[s]=j++;
            if(mp[s1]==0)
                mp[s1]=j++;
            unionset(p,r,mp[s],mp[s1]);
            ll p1=findrep(p,mp[s]);
            ll p2=p[mp[s]];
            cout<<r[p1]<<endl;
        }
    }
}
