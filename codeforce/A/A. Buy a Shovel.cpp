#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n;
    cin>>a>>b;
    for(i=1;;i++)
    {
        if((a*i)%10==0||(a*i)%10==b){
            cout<<i<<endl;break;
        }
    }
}
