#include<bits/stdc++.h>
using namespace std;
int x[100001];
static int l=0;
int mn(int n,int m)
{
    if(n==0||m==0) return l;
    x[l++]=n/m;
    mn(m,n%m);
}
main()
{
    int o,p,i;
    while(cin>>o>>p)
    {
        int j;
        j=mn(o,p);
        for(i=0;i<j;i++)
        {
            if(i==0)
            {
                cout<<'['<<x[i]<<';';
            }
            else if(i==j-1)
                cout<<x[i]<<']'<<endl;
            else
                cout<<x[i]<<',';
        }
        l=0;
    }
}
