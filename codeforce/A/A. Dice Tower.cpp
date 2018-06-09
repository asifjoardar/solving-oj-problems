#include<iostream>
using namespace std;
main()
{
    int a,b,t,u,x,p=1;
    cin>>t>>u;
    x=7-u;
    while(t--)
    {
        cin>>a>>b;
        if(a==u||b==u||a==x||b==x)
            p=0;
    }
    if(p==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
