#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,i,ans=0,x=0,y;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    y=n-1;
    while(x<y)
    {
        if(a[x]==a[y])
        {
            if(ans<a[x])
                ans=a[x];
        }
        if(a[x]<a[y])
        {
            a[x+1]=a[x]+a[x+1];
            x++;
        }
        else
        {
            a[y-1]=a[y]+a[y-1];
            y--;
        }
    }
    cout<<ans<<endl;
}
