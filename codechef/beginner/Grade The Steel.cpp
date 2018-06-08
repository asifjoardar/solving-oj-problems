#include<iostream>
using namespace std;
int main()
{
    int t,g,a,c;
    double b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>50&&b<0.7&&c>5600)
            g=10;
        else if(a>50&&b<0.7)
            g=9;
        else if(b<.7&&c>5600)
            g=8;
        else if(a>50&&c>5600)
            g=7;
        else if(a>50||b<0.7||c>5600)
            g=6;
        else
            g=5;
        cout<<g<<endl;
    }
    return 0;
}
