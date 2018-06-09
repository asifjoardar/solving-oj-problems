#include<iostream>
using namespace std;
int main()
{
    int i=0,a,b;
    cin>>a>>b;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        i++;
    }
    cout<<i<<endl;
}
