#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,sum1=0,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        sum++;
        else if(a<b)
        sum1++;
    }
    if(sum>sum1)
        cout<<"Mishka"<<endl;
    else if(sum<sum1)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
