#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b-a>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
