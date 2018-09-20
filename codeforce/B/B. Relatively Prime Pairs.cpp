#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,n,m;
    cin>>n>>m;

    cout<<"YES"<<endl;
    a=n;b=m;
    for(ll i=1;i<=m-n+1;i+=2)
    {
        cout<<a<<" "<<++a<<endl;
        a++;
    }
}
