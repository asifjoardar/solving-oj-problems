#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[4],t;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3]&&a[0]!=a[3])
            cout<<"rectangle"<<endl;
        else if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
            cout<<"square"<<endl;
        else if(a[0]+a[1]+a[2]>a[3])
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }
}
