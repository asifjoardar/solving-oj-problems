#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a[12],i,count=0,sum=0;
    cin>>n;
    for(i=0;i<12;i++) cin>>a[i];
    if(n==0)
        cout<<0<<endl;
    else{
    sort(a,a+12);
    for(i=11;i>=0;i--)
    {
        sum+=a[i];
        count++;
        if(sum>=n)
            break;
    }
    if(count==12&&sum<n)
        cout<<-1<<endl;
    else
        cout<<count<<endl;
    }
}
