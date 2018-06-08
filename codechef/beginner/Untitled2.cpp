#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i,n;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(i=0;i<n;i++) cin>>a>>b;
        for(i=1;i<=n;i++) sum^=i;
        cout<<sum<<endl;
    }
    return 0;
}
