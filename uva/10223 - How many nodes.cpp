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
#define ui unsigned int
using namespace std;
ll asifcata(ll n)
{
    if(n<=1) return 1;
    ll res=0;
    for(ll i=0;i<n;i++)
    res+=asifcata(i)*asifcata(n-i-1);
    return res;
}
main()
{
    ll i,n,a[21];
    for(i=0;i<=19;i++)
    a[i]=asifcata(i);
    while(cin>>n)
    {
        if(n==0||n==1) cout<<1<<endl;
        else{
        for(i=2;i<=19;i++)
        if(a[i]==n)
        cout<<i<<endl;
        }
    }
}
