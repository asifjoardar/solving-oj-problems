#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int x,n;
    while(cin>>n)
    {
        if(n==0) break;
        x=sqrt(n);
        if((x*x)==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
