#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,a,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int p=0;
        for(j=0;j<13;j++)
        {
            cin>>a;
            if(a==0) p=1;
        }
        if(p==1)
            printf("Set #%d: No\n",i);
        else
            printf("Set #%d: Yes\n",i);
    }
}
