#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n,ans;
    cin>>n;
    if(n==0)
    ans=0;
    else if((n+1)%2==0)
    ans=(n+1)%2;
    else
    ans=(n+1);
    cout<<ans<<endl;
}
