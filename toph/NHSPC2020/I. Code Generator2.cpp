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
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    
    //fio();
    ll n,i,j,k,l,count=0;
    string s;
    vector<ll>c,o,d,e;
    cin>>n>>s;
    for(i=0;i<n;i++){
        if(s[i]=='c') c.pb(i);
        else if(s[i]=='o') o.pb(i);
        else if(s[i]=='d') d.pb(i);
        else if(s[i]=='e') e.pb(i);
    }

    for(i=0;i<c.size();i++){
        bool ok=true;
        auto it=upper_bound(o.begin(),o.end(),c[i]);
        if(it==o.end())
        {
            ok=false;
            continue;
        }
        //cout<<o[it-o.begin()]<<endl;
        
        auto it1=upper_bound(d.begin(),d.end(),o[it-o.begin()]);
        o[it-o.begin()]=-1;
        if(it1==d.end())
        {
            ok=false;
            continue;
        }
        //cout<<d[it1-d.begin()]<<endl;
        
        auto it2=upper_bound(e.begin(),e.end(),d[it1-d.begin()]);
        d[it1-d.begin()]=-1;
        if(it2==e.end())
        {
            ok=false;
            continue;
        }
        //cout<<e[it2-e.begin()]<<endl;
        e[it2-e.begin()]=-1;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
