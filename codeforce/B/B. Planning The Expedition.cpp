#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,p[101]={0},i,j,x,l=0,sum;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        p[x]++;
    }
    for(i=1;i<=100;i++)
    {
        sum=0;
        for(j=1;j<=100;j++)
        {
            sum+=p[j]/i;
        }
        if(sum>=n)
            l=i;
    }
    cout<<l<<endl;
}
