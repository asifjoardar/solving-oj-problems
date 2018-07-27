#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    int m,n,o;
    cin>>t;
    while(t--){
    cin>>m>>n>>o;
    if((m+n)/3==m*2)
        cout<<o<<endl;
    else
        cout<<o*(m+m-n)/(m+n)<<endl;
    }
}
