#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll i,j,n,x,y,l,f;
    cin>>n;
    ll p[n];
    for(i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    x=p[n-1]-p[0];
    f=count(p,p+n,p[0]);
    l=count(p,p+n,p[n-1]);
    if(p[0]==p[n-1]) y=n*(n-1)/2;
    else
    y=l*f;
    cout<<x<<" "<<y<<endl;
}
