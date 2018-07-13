#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,count;
    while(cin>>a>>b){
    count=0;
    while(a<b)
    {
        if(b%2)
            b++;
        else
            b/=2;
        count++;
    }
    cout<<count+a-b<<endl;
    }
}
