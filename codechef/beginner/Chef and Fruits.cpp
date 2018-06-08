#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c,d,t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    d=abs(a-b);
    if(d>=c)
        cout<<d-c<<endl;
    else
        cout<<0<<endl;
    }
    return 0;
}
