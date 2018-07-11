#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,a;
    while(cin>>t)
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            cin>>a;
            if(a==t)
                count++;
        }
        cout<<count<<endl;
    }
}
