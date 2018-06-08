#include<iostream>
using namespace std;
main()
{
    int t,n,a,b,c,i;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }
}
