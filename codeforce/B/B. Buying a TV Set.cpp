#include<bits/stdc++.h>
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define pf printf
using namespace std;

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,x,y,p,q,l,i;
    cin>>a>>b>>x>>y;
    l=__gcd(x,y);
    x=x/l;y=y/l;
    p=a/x;
    q=b/y;
    if(p<q)
        cout<<p<<endl;
    else
        cout<<q<<endl;
}
