#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    while(cin>>n)
    {
        int a[n];
        if(n==0) break;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(i<n-1)
                cout<<a[i]<<" ";
            else
                cout<<a[i]<<endl;
        }
    }
}
