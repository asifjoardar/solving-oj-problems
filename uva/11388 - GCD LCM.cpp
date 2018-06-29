#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<a<<" "<<b<<endl;
        else
            cout<<-1<<endl;
    }
}
