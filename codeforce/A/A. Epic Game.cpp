#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0) return b;
    gcd(b,a%b);
}
int main()
{
    int a,b,c,d,x=0;
    cin>>a>>b>>c;
    while(c>0)
    {
        if(x%2==0)
        d=gcd(a,c);
        else
        d=gcd(b,c);
        c=c-d;
        x++;
    }
    if(x&1)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    return 0;
}
