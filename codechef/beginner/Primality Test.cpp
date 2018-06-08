#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,t,n,a;
    cin>>t;
    while(t--)
    {
        int f=0;
        cin>>a;
        for(i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
