#include<iostream>
using namespace std;
main()
{
    int t,n,b,i;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        int a[n];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            cin>>b;
            if(b<=a[i]-a[i-1])
                count++;
        }
        cout<<count<<endl;
    }
}
