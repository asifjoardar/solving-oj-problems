#include<iostream>
using namespace std;
main()
{
    int sum,sum1,sum2,p,q,a,i,n;
    sum=sum1=sum2=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        sum+=a;}
    for(i=0;i<n-1;i++)
    {
        cin>>a;
        sum1+=a;
    }
    for(i=0;i<n-2;i++)
    {
        cin>>a;
        sum2+=a;
    }
    p=sum-sum1;
    q=sum1-sum2;
    cout<<p<<'\n'<<q<<endl;
}
