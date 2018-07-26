#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,n,sum=0;
    cin>>n;
    int p[n];
    for(i=0;i<7;i++) cin>>p[i];
    i=0;
    int count=0;
    while(sum<n)
    {
        if(i==7){
            i=0;
            count=0;
        }
        sum+=p[i];
        count++;
        i++;
    }
    cout<<count<<endl;
}
