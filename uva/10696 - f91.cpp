#include<bits/stdc++.h>
using namespace std;
int asif(int n)
{
    if(n>=101)
    {
        return n-10;
    }
    else
    {
        return asif(asif(n+11));
    }
}
main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        printf("f91(%d) = %d\n",n,asif(n));
    }
}
