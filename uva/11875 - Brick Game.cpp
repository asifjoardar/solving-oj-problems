#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,n1,i,j;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>n1;
        int a[n1];
        for(i=0;i<n1;i++) cin>>a[i];
        n1=(n1/2);
        printf("Case %d: %d\n",j,a[n1]);
    }
}
