#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,a,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if((a+b)>c)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
}
