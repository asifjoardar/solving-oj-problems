#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int u=0,d=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++) cin>>a[j];
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]) d++;
            else if(a[j]<a[j+1]) u++;
        }
        printf("Case %d: %d %d\n",i,u,d);
    }
}
