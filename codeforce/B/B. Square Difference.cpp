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
using namespace std;
int prime(ll n)
{
    if(n==0||n==1) return 0;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
main()
{
    ll t,a,b,v;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll x=(a-b);
        if(x==1){
        if(prime(a+b)==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        }
        else
        cout<<"NO\n";
    }
}
