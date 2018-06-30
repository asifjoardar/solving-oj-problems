#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,n1,c;
    while(cin>>n)
    {
        n1=n+1;
        int sum=0,sum1=0;
        sum1+=n;
        sum+=n;
        while(n/3>0)
        {
            c=n;
            n=c/3;
            sum+=n;
            n=n+c%3;
        }
        while(n1/3>0)
        {
            c=n1;
            n1=c/3;
            sum1+=n1;
            n1=n1+c%3;
        }
        if(sum<sum1&&n1==1)
        cout<<sum1<<endl;
        else
        cout<<sum<<endl;
    }
}
