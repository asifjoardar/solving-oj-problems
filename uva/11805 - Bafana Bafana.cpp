#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,a,b,c,i,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        x=c%a;
        x=b+x;
        if(x<=a) printf("Case %d: %d\n",i,x);
        else printf("Case %d: %d\n",i,x-a);
    }
}
