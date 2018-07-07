#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    double n,p,q,pi=acos(-1);;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=n*.6;
        q=n*.2;
        p=p*n;
        q=q*q*pi;
        p=p-q;
        printf("%.2lf %.2lf\n",q,p);
    }
}
