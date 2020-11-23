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
#define MOD 4294967296
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
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++){
        ll i,j,ans=0;
        string s;
        vector<ll>w,o;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='W'){
                w.pb(i);
            }
            else
                o.pb(i);
        }
        if(!w.size() or !o.size())
            ans=0;
        else{
            i=0,j=0;
            vector<PII>v;
            while(i<w.size() and j<o.size()){
                if(w[i]<o[j]){
                    v.pb({w[i],o[j]});
                    i++;
                    j++;
                }
                else
                    j++;
            }
            ll lo=0,hi=v.size()-1,cnt,mid;
            while(lo<=hi){
                mid=(lo+hi)/2;
                i=mid,j=w.size()-1;
                cnt=0;
                ll vis[s.size()]={0};
                while(i>=0 and j>=0){
                    if(v[i].ss<w[j]){
                        if(vis[w[j]])
                            j--;
                        else{
                            vis[w[j]]++;
                            vis[v[i].fs]++;
                            cnt++;
                            i--;
                            j--;
                        }
                    }
                    else{
                        i--;
                    }
                }
                //cout<<mid<<endl;
                ans=max(ans,cnt);
                if(cnt<(mid+1))
                    hi=mid-1;
                else
                    lo=mid+1;
            }
        }
        cout<<"Case "<<l<<": "<<ans<<endl;
    }
    return 0;
}
