#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,t,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        printf("Case #%d: %d\n",i,a+(a-1));
    }
}
