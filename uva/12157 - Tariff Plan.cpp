#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,n,p,q;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum1=0,sum2=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++) cin>>a[j];
        for(j=0;j<n;j++)
        {
            if(a[j]<30)
                sum1+=10;
            else{
            p=(a[j]/30)+1;
            sum1+=p*10;
            }
            if(a[j]<60)
                sum2+=15;
            else{
            p=(a[j]/60)+1;
            sum2+=p*15;
            }
        }
        if(sum1<sum2)
            printf("Case %d: Mile %d\n",i,sum1);
        else if(sum1>sum2)
            printf("Case %d: Juice %d\n",i,sum2);
        else
            printf("Case %d: Mile Juice %d\n",i,sum1);
    }
}
