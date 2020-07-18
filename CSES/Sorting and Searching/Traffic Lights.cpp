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
    ll i,x,n,num,p,q;
    cin>>x>>n;
    set<ll>s;
    multiset<ll>ans;
    for(i=0;i<n;i++){
        cin>>num;
        s.insert(num);
        if(s.size()==1){
            cout<<max(num,x-num)<<" ";
            ans.insert(num);
            ans.insert(x-num);
            //cout<<num<<" "<<x-num<<endl;
        }
        else{
            auto it=s.lower_bound(num);
            auto it1=it;
            it1++;
            if(it==s.begin())
                p=num;
            else{
                it--;
                p=num-*it;
            }
            if(it1==s.end())
                q=x-num;
            else{
                q=*it1-num;
            }
            //cout<<p<<" "<<q<<endl;
            ans.erase(ans.lower_bound(p+q));
            ans.insert(p);
            ans.insert(q);
            auto it2=ans.upper_bound(x);
            it2--;
            cout<<*it2<<" ";
        }
    }
    cout<<endl;
    return 0;
}
