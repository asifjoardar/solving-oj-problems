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
 
 
int main()
{
    //fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,x,i,j;
    cin>>n>>x;
    ll a[n];
    vector<pair<ll,PII>>v;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            v.pb({a[i]+a[j],{i,j}});
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        if(v[i].fs>=x) break;
        ll baki=x-v[i].fs;
        auto it=lower_bound(v.begin(),v.end(),make_pair(baki,make_pair(0LL,0LL)));
        if(it==v.end()) continue;
        for(;it!=v.end();it++){
            pair<ll,PII> p=*it;
            if(p.fs!=baki) break;
            if(p.ss.fs!=v[i].ss.fs and p.ss.ss!=v[i].ss.ss and p.ss.fs!=v[i].ss.ss and p.ss.ss!=v[i].ss.fs){
                cout<<v[i].ss.fs+1<<" "<<v[i].ss.ss+1<<" "<<p.ss.fs+1<<" "<<p.ss.ss+1<<endl,exit(0);
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}
