#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0) break;
        if(a>b&&a>c)
        {
            if((b*b)+(c*c)==(a*a))
            cout<<"right"<<endl;
            else
            cout<<"wrong"<<endl;
        }
        else if(b>a&&b>c)
        {
            if((a*a)+(c*c)==(b*b))
            cout<<"right"<<endl;
            else
            cout<<"wrong"<<endl;
        }
        else if(c>a&&c>b)
        {
            if((a*a)+(b*b)==(c*c))
            cout<<"right"<<endl;
            else
            cout<<"wrong"<<endl;
        }
        else
            cout<<"wrong"<<endl;
    }
}
