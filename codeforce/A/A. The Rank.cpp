#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,m,n,o,p,l,i;
    cin>>t;
    int x[t];
    cin>>m>>n>>o>>p;
    l=m+n+o+p;
    x[0]=l;
    for(i=1;i<t;i++)
    {
        cin>>m>>n>>o>>p;
        x[i]=m+n+o+p;
    }
    sort(x,x+t);
    for(i=t-1;i>=0;i--)
    {
        if(l==x[i])
        {
            cout<<t-i<<endl;
            break;
        }
    }
}
