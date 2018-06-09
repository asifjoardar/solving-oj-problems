#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,c=0,i,n;
        int a[101]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a[x]++;
        }
        for(i=1;i<=100;i++)
        {
            if(a[i]>0) c++;
        }
        cout<<c<<endl;
    }
}
