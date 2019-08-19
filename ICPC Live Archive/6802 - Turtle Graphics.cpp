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
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,i,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        ll x,y,p=0,q=1,R=0,count=0;
        string s;
        map<PII,ll>mp;
        scanf("%lld%lld",&x,&y);
        mp[makep(x,y)]++;
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            //cout<<x<<" "<<y<<endl;
            if(s[j]=='F')
            {
                x+=p;y+=q;
                mp[makep(x,y)]++;
            }
            if(s[j]=='R')
            {
                R++;
                if(R%4==0)
                {
                    p=0;
                    q=1;
                }
                else if(R%4==1)
                {
                    q=0;
                    p=1;
                }
                else if(R%4==2)
                {
                    p=0;
                    q=-1;
                }
                else if(R%4==3)
                {
                    p=-1;
                    q=0;
                }
            }
            if(s[j]=='L')
            {
                if((R)%4==0)
                {
                    p=-1;
                    q=0;
                    R=3;
                }
                else if((R)%4==1)
                {
                    q=1;
                    p=0;
                    R=0;
                }
                else if((R)%4==2)
                {
                    p=1;
                    q=0;
                    R=1;
                }
                else if((R)%4==3)
                {
                    p=0;
                    q=-1;
                    R=2;
                }
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
                count++;
        }
        printf("Case #%lld: %lld %lld %lld\n",i,x,y,count);
    }
}
