#include<bits/stdc++.h>
using namespace std;
main()
{
    int sum,sum1,a,b;
    while(cin>>a>>b)
    {
        if(a<0&&b<0) break;
        if(a>b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }
        sum=(b-a);
        sum1=(a+100)-b;
        if(sum<sum1)
            cout<<sum<<endl;
        else
            cout<<sum1<<endl;
    }
}
