#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        int n,i,j,sum=0;
        cin>>n;
        int x[n+1][n+1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cin>>x[i][j];
            }
        }
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                x[i-1][j]+=max(x[i][j],x[i][j+1]);
            }
        }
        cout<<x[0][0]<<endl;
    }
}
