#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    double sum,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<=180000.0)
            sum=0.0;
        else if(x>180000.0&&x<=480000.0)
        {
            sum=(x-180000.0)*.1;
        }
        else if(x>480000.0&&x<=880000.0)
        {
            sum=(x-480000.0)*.15+30000;
        }
        else if(x>880000.0&&x<=1180000.0)
        {
            sum=(x-880000.0)*.2+90000;
        }
        else if(x>1180000.0)
        {
            sum=(x-1180000.0)*.25+150000;
        }
        if(sum>0.0&&sum<2000.0)
            sum=2000.0;
            sum=ceil(sum);
        printf("Case %d: %d\n",i,(int)sum);
    }
}
