#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum=0,sum1=0,min=101;
        for(j=0;j<4;j++)
        {
            cin>>n;
            sum+=n;
        }
        for(j=0;j<3;j++)
        {
            cin>>n;
            sum1+=n;
            if(n<min)
                min=n;
        }
        sum+=((sum1-min)/2);
        if(sum>=90) printf("Case %d: A\n",i);
        else if(sum<90&&sum>=80) printf("Case %d: B\n",i);
        else if(sum<80&&sum>=70) printf("Case %d: C\n",i);
        else if(sum<70&&sum>=60) printf("Case %d: D\n",i);
        else printf("Case %d: F\n",i);
    }
}
