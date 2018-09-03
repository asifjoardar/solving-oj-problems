#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n,n1=0;
    string s;
    cin>>n>>s;
    reverse(s.begin(),s.end());
    stringstream asif(s);
    asif>>n1;
    cout<<n1+n;
}
