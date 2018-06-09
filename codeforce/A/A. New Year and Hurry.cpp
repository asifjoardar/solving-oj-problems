#include<iostream>
using namespace std;
int main()
{
    int a,b,i=1,c;
    cin>>a>>b;
    c=240-b;
    while(c>=0&&i<=a)
    {
        c=c-(5*i);
        if(c>=0) i++;
    }
    cout<<i-1<<endl;
}
