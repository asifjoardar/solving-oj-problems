#include<iostream>
using namespace std;
main()
{
    int t,n,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum^=a[i];}
        cout<<sum<<endl;
    }
}
