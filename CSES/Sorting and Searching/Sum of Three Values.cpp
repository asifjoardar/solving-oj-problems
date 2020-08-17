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
    ll n,x,num,i,j;
    cin>>n>>x;
    vector<PII>v;
    for(i=0;i<n;i++){
        cin>>num;
        v.pb({num,i});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            ll sum=v[i].fs+v[j].fs;
            if(sum>=x) break;
            auto it=lower_bound(v.begin(),v.end(),make_pair((x-sum),numeric_limits<ll>::min()));
            if(it==v.end()) continue;
            auto it1=upper_bound(v.begin(),v.end(),make_pair((x-sum),numeric_limits<ll>::max()));
            PII p=*it;
            PII q=*it1;
            ll ds=distance(it,it1);
            for(auto k=it;k!=it1;k++){
                PII s=*k;
                if(s.ss!=v[i].ss and s.ss!=v[j].ss){
                    cout<<v[i].ss+1<<" "<<v[j].ss+1<<" "<<s.ss+1<<endl,exit(0);
                }
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}
