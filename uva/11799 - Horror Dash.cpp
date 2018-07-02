#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,p,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int max=-1;
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>p;
            if(p>max)
                max=p;
        }
        printf("Case %d: %d\n",i,max);
    }
}
