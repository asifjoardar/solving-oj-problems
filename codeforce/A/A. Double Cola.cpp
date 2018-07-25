#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,p=1;
    string s[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    while(n>5*p)
    {
        n=n-(5*p);
        p*=2;
    }
    n=n-1;
    n=n/p;
    cout<<s[n]<<endl;
}
