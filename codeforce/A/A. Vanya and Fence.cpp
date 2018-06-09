#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,n,h;
    cin>>n>>h;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum<<endl;
    return 0;
}
