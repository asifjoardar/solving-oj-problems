#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j=0,n,count=0,mx=-1;
    cin>>n;
    int a[n],b[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)
            j++;
    }
    if(j==n) cout<<n-1<<endl;
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count++;
                if(count>mx) mx=count;
            }
            if(a[i]==1&&count!=0)
                count--;
        }
        cout<<mx+j<<endl;
    }
}
