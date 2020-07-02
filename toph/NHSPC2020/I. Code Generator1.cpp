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
    deque<ll>c,o,d,e;
    cin>>n>>s;
    for(i=0;i<n;i++){
        if(s[i]=='c') c.pb(i);
        else if(s[i]=='o') o.pb(i);
        else if(s[i]=='d') d.pb(i);
        else if(s[i]=='e') e.pb(i);
    }

    for(i=0;i<c.size();i++){
        ll num=c[i],cnt=0;
        while(!o.empty()){
            if(num<o[0])
            {
                cnt++;
                num=o[0];
                o.pop_front();
                break;
            }
            o.pop_front();
        }
        while(!d.empty()){
            if(num<d[0])
            {
                cnt++;
                num=d[0];
                d.pop_front();
                break;
            }
            d.pop_front();
        }
        while(!e.empty()){
            if(num<e[0])
            {
                cnt++;
                num=e[0];
                e.pop_front();
                break;
            }
            e.pop_front();
        }
        if(cnt==3)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
