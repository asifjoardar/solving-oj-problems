#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t,i,c=0,c1=0,x;
    cin>>n>>t;
    x=n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=t) c++;
        else
        {
            x=i;
            break;
        }
    }
    for(i=n-1;i>x;i--)
    {
        if(a[i]<=t) c++;
        else break;
    }
    cout<<c<<endl;
}
