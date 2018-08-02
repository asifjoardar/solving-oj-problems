#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,o,p,i,j,count=0;
    cin>>m>>n;
    int x[n+1]={0};
    for(i=0;i<m;i++)
    {
        cin>>o>>p;
        for(j=o;j<=p;j++)
            x[j]++;
    }
    for(i=1;i<=n;i++)
    {
        if(x[i]==0)
            count++;
    }
    cout<<count<<endl;
    for(i=1;i<=n;i++)
    {
        if(x[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
}
