#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,count=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]+=m;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]>5) break;
        count++;
    }
    cout<<count/3<<endl;
}
