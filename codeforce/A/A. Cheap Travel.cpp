#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b,x,x1,y;
    cin>>n>>m>>a>>b;
    if(n%m==0)
    {
        x=(n/m)*b;
    }
    else
    {
        x=(n/m)*b+(n%m)*a;
        x=min(x,((n/m)+1)*b);
    }
    y=n*a;
    if(x<y)
        cout<<x<<endl;
    else
        cout<<y<<endl;
    return 0;
}
