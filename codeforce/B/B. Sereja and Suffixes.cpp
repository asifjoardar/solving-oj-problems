#include<bits/stdc++.h>
using namespace std;
main()
{
    int m,n,i,c=0,o,x[100001]={0};
    cin>>m>>n;
    int p[m];
    for(i=0;i<m;i++)
    {
        cin>>p[i];
    }
    for(i=m-1;i>=0;i--)
    {
        if(x[p[i]]==0)
        {
            x[p[i]]=1;
            c++;
        }
        p[i]=c;
    }
    for(i=0;i<n;i++)
    {
        cin>>o;
        cout<<p[o-1]<<endl;
    }
}
