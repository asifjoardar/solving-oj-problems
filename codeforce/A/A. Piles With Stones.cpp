#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,i,sum=0,sum1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum1+=x;
    }
    if(sum>=sum1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;;
}
