#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a,i,n;
    while(cin>>a){
    n=a;
    int count=0;
    if(a==0) break;
    int f=0;
    while(a%2==0)
    {
        f=1;
        a=a/2;
    }
    if(f==1) count++;
    for(i=3;i<=sqrt(a);i+=2)
    {
        f=0;
        while(a%i==0)
        {
            f=1;
            a=a/i;
        }
        if(f==1)
        count++;
    }
    if(a>2)
        count++;
    cout<<n<<" : "<<count<<endl;
    }
}
