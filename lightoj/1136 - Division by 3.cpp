#include<bits/stdc++.h>
using namespace std;
int asif(int n)
{
    if(n%3==2) return ((n/3)*2)+1;
    else return (n/3)*2;
}
main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        printf("Case %d: %d\n",i,asif(b)-asif(a-1));
    }
}
