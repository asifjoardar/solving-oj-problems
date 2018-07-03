#include<bits/stdc++.h>
using namespace std;
main()
{
    int h1,h2,h3,h4,m1,m2,m3,m4,i,t;
    char c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>h1>>c>>m1>>h2>>c>>m2;
        cin>>h3>>c>>m3>>h4>>c>>m4;
        h1=(h1*60)+m1;
        h2=(h2*60)+m2;
        h3=(h3*60)+m3;
        h4=(h4*60)+m4;

        if(h3>h2||h4<h1)
            printf("Case %d: Hits Meeting\n",i);
        else
            printf("Case %d: Mrs Meeting\n",i);
    }
}
