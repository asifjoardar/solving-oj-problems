#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int i=1,count=0;
        cin>>n;
        while(n>0)
        {
            n=n-i;
            count++;
            i++;
            if(i>n)
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
