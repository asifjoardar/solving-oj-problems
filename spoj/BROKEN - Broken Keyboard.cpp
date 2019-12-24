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
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll m;
    while(cin>>m)
    {
        ll ans=0,i,j,n,count=0,len=0;
        string s;
        if(m==0) break;
        cin.ignore();
        getline(cin,s);
        n=s.size();
        map<char,ll>mp;
        for(i=0,j=0;i<n&&j<n;j++)
        {
            if(mp[s[j]]==0){
                count++;
            }
            mp[s[j]]++;
            if(count>m)
            {
                ans=max(ans,abs(j-i));
                while(count>m)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        count--;
                    i++;
                }
            }
        }
        ans=max(ans,abs(j-i));
        cout<<ans<<endl;
    }
    return 0;
}
