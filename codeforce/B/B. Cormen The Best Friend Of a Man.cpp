#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,sum=0;
    cin>>n>>m;
    int a[n],x[n];
    for(i=0;i<n;i++) cin>>a[i];
    x[0]=a[0];
    for(i=0;i<n-1;i++)
    {
        if(a[i]+a[i+1]<m){
        sum+=(m-a[i])-a[i+1];
        a[i+1]=m-a[i];
        //cout<<sum<<endl;
        }
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

