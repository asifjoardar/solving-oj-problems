#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,sum=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++) cin>>a[j];
        sort(a,a+n);
        x=n/2;
        for(j=0;j<n;j++)
        {
            if(j!=x)
            {
                sum+=abs(a[x]-a[j]);
            }
        }
        cout<<sum<<endl;
    }
}
