#include<iostream>
using namespace std;
main()
{
    int t,i,n,m;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=a[i]+m;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%7==0) count++;
        }
        cout<<count<<endl;
    }
}
