//n*(n+1)*(2*n+1)/6.
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<n*(n+1)*(2*n+1)/6.<<endl;
    }
}
