#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c;
    x=(((a+b)*2)>(a+b+c))?(a+b+c):((a+b)*2);
    y=((a+c)*2>(b+c)*2)?(b+c)*2:(a+c)*2;
    if(x<y)
        cout<<x<<endl;
    else
        cout<<y<<endl;
    return 0;
}
