#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        printf("%s\n",(360%(180-n)==0)?"YES":"NO");
    }
}
