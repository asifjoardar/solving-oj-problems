#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,m,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum=0,f=0;
        cin>>n>>m;
        int p[n],l[n];
        for(j=0;j<n;j++)
        {
            cin>>p[j];
            sum+=p[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>l[j];
            if(l[j]<p[j])
            {
                f=1;
            }
        }
        if(sum>m||f==1)
            printf("Case %d: No\n",i);
        else
            printf("Case %d: Yes\n",i);
    }
}
