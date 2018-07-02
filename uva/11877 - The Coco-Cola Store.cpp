#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c;
    while(cin>>n)
    {
        int sum=0;
        if(n==0) break;
        while(n/3>0)
        {
            c=n;
            n=c/3;
            sum+=n;
            n=n+c%3;
        }
        if(n==2) sum+=1;
        cout<<sum<<endl;
    }
}
