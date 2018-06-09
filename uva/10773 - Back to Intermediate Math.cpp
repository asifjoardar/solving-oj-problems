#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    double way1,way2,d,v,u;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>d>>v>>u;
        if(u==0||u<v||v==0||u==v)
            printf("Case %d: can't determine\n",i);
        else{
            way1=d/u;
            way2=d/(sqrt((u*u)-(v*v)));
            printf("Case %d: %.3lf\n",i,way2-way1);
        }
    }
}
