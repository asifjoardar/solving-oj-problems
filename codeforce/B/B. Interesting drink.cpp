#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t,i,x,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x;
        int l=-1,r=n;
            while(r-l>1)
            {
                p=0;
                int mid=(r+l)/2;
                if(x==a[mid])
                    l=mid;
                else if(x>a[mid])
                    l=mid;
                else
                    r=mid;
            }
            cout<<l+1<<endl;
    }
}
