#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    ll n,m,sum=0,i,x;
    cin>>n>>m;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    x=(n/2);
    sum=abs(m-a[x]);
    for(i=0;i<x;i++){
        if(a[i]>m)
            sum+=a[i]-m;
    }
    for(i=x+1;i<n;i++){
        if(a[i]<m)
            sum+=m-a[i];
    }
    cout<<sum<<endl;
}
