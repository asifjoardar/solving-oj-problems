#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,a,sum=0,i;
    cin>>n>>m;
    for(i=0;i<n;i++){
    cin>>a;
    sum+=a;
    }
    if(sum==0)cout<<0<<endl;
    else
    {
        if(sum<0) sum*=(-1);
        if(sum<=m)cout<<1<<endl;
        else{
        if(sum%m==0)cout<<sum/m<<endl;
        else cout<<(sum/m)+1<<endl;
        }
    }
}
