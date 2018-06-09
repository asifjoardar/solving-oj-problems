#include<iostream>
using namespace std;
int main()
{
    int a,b,i=1,c=0;
    cin>>a>>b;
    while(c<a)
    {
        c=i*b;
        a++;
        i++;
    }
    cout<<a-1<<endl;
    return 0;
}
