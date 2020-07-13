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
    ll n,m,k,i;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    ll count=0;
    for(i=0;i<m;i++){
        ll l=0,r=n-1,last=-1;
        while(l<=r){
            ll mid=(l+r)/2;
            if(mp[a[mid]]>0 and (b[i]>=a[mid]-k and b[i]<=a[mid]+k)){
                last=mid;
                r=mid-1;
            }
            else if(b[i]<a[mid]-k)
                r=mid-1;
            else
                l=mid+1;
        }
        if(last!=-1){
            mp[a[last]]--;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
};
