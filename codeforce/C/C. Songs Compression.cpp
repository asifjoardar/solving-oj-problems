#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,m,i,o,p,sum=0,count=0;
    cin>>n>>m;
    long long int b[n];
    for(i=0;i<n;i++)
    {
        cin>>o>>p;
        sum+=o;
        b[i]=o-p;
    }
    if(sum<=m) cout<<0<<endl;
    else
    {
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(sum<=m)
                break;
            sum-=b[(n-1)-i];
            count++;
        }
        if(sum>m)
            cout<<-1<<endl;
        else
        cout<<count<<endl;
    }
}
