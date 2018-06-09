#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=(a>b)?b:a;
    y=(a>b)?a:b;
    y=(y-x)/2;
    cout<<x<<' '<<y<<endl;
}
