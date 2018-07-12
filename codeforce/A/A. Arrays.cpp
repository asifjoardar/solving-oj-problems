#include<bits/stdc++.h>
using namespace std;
main()
{
    int m,n,p,q,i;
    cin>>m>>n;
    int a[m],b[n];
    cin>>p>>q;
    for(i=0;i<m;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];
    if(a[p-1]<b[n-q])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
