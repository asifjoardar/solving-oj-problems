#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0) return b;
    else gcd(b,a%b);
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=gcd(a,b);
        cout<<(a*b)/(c*c)<<endl;
    }
    return 0;
}
