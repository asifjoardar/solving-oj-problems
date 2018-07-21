#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,x;
    while(cin>>n>>m)
    {
        int count=0;
        if(n==0&&m==0) break;
        for(i=n;i<=m;i++)
        {
            x=sqrt(i);
            if((x*x)==i) count++;
        }
        cout<<count<<endl;
    }
}
