#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,k,a;
    int x[3];
    cin>>t;
    for(k=1;k<=t;k++)
    {
        int count=0;
        j=0;
        cin>>a;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                x[j++]=i;
                count++;
            }
            if(count==2) break;
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",k,a,x[0],a/x[0],x[1],a/x[1]);
    }
}
