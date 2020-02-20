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
#define PII pair<string, string > 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    //fio();
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        string s,s1;
        ll count=0,i,j=0;
        cin>>s>>s1;
        deque<ll>a[26];
        for(i=0;i<s.size();i++)
        {
            a[s[i]-'a'].pb(i);
        }
        for(i=0;i<s1.size();i++)
        {
            ll num=s.size()-s1.size()+i;
            ll p=upper_bound(a[s1[i]-'a'].begin(),a[s1[i]-'a'].end(),i-1)-a[s1[i]-'a'].begin();
            ll q=upper_bound(a[s1[i]-'a'].begin(),a[s1[i]-'a'].end(),num)-a[s1[i]-'a'].begin();
            count+=q-p;
        }
        pf("Case %lld: %lld\n",l,count);
    }
    return 0;
}
// ! ()
