#include<bits/stdc++.h>
#include<string.h>
using namespace std;
main()
{
    long long int i,m,n;
    while(cin>>m>>n)
    {
        if(m==0&&n==0) break;
        long long int count=0,l=0;
        while(m>0||n>0)
        {
            l=((m%10)+(n%10)+l)/10;
            m/=10;
            n/=10;
            count+=l;
        }
        if(count==0)
        cout<<"No carry operation."<<endl;
        else if(count==1)
        cout<<count<<" carry operation."<<endl;
        else
        cout<<count<<" carry operations."<<endl;
    }
}
