#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i;
    double c,f,fi;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c>>fi;
        f=((9*c)+160)/5;
        f+=fi;
        c=((5*f)-160)/9;
        printf("Case %d: %.2lf\n",i,c);
    }
}
