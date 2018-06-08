#include<iostream>
using namespace std;
main()
{
    int a,i,sum=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        sum=sum+((a-i)*i);
    }
    cout<<sum+a<<endl;
}
