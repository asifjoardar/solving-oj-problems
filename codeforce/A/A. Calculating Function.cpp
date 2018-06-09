#include<iostream>
using namespace std;
int main()
{
    long long int n,i,a,b,x,p;
    cin>>n;
    if(n%2==0)
    {
        p=n-1;
        a=p/2;
        b=p-a;
        a=((((a*a)+a)/2)+(((b*b)+b)/2));
        x=((2+n)/2)-1;
        b=x*(x+1);
    }
    else
    {
        a=n/2;
        b=n-a;
        a=((((a*a)+a)/2)+(((b*b)+b)/2));
        x=((2+(n-1))/2)-1;
        b=x*(x+1);
    }
    cout<<b-a<<endl;
    return 0;
}
