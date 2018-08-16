#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            count+=abs(a[i]-a[i-1])+1;
            a[i]=a[i-1]+1;
        }
    }
    cout<<count<<endl;
}
