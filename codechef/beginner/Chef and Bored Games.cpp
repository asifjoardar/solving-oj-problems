#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=0;
        cin>>x;
        while(x>=1)
        {
            sum+=x*x;
            x-=2;
        }
        cout<<sum<<endl;
    }
}
