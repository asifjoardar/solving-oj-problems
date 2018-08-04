#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,d=0,i,x;
    cin>>n>>m;
    int l[n]={0};
    for(i=0;i<n;i++){
        cin>>x;
        l[i]=(d+x)/m;
        d=(d+x)%m;
    }
    for(i=0;i<n;i++)
        cout<<l[i]<<" ";
    cout<<endl;
}
