#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,sum=0,sum1=0; 
    cin>>n>>m;
    int a[n]; 
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<m;i++) 
    {
     if(a[i]<0)
     sum+=abs(a[i]);
    }
    cout<<sum<<endl;
} 
