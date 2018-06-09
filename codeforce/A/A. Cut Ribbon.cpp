#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,r;
    cin>>n>>a>>b>>c;
    r=n;
    if(a+b==n||b+c==n||c+a==n)
        r=2;
    else if(a+b+c==n)
        r=3;
    else if(a==n||b==n||c==n)
    {
        r=1;
    }
    cout<<r<<endl;
    return 0;
}
