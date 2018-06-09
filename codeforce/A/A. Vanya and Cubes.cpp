#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cin>>n;
    while(n>=0)
    {
        sum+=i;
        n=n-sum;
        if(n>=0) i++;
    }
    cout<<i-1<<endl;
}
