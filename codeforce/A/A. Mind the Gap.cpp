#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n],b[n],x[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    if(a[0]==0&&b[0]>m)
    {
        cout<<0<<" "<<0<<endl;
    }
    else if(n==1)
    {
        int p=a[0]*60+b[0];
        if(p>m) cout<<0<<" "<<0<<endl;
        else
        {
            p=p+m+1;
            cout<<p/60<<" "<<p%60<<endl;
        }
    }
    else
    {
        int p,f=0;
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]*60+b[i+1])-(a[i]*60+b[i])>=2*m+2)
            {
                p=(a[i]*60+b[i]+1)+m;
                cout<<p/60<<" "<<p%60<<endl;
                f=1;break;
            }
        }
        if(f==0)
        {
            p=(a[n-1]*60+b[n-1]+1)+m;
            cout<<p/60<<" "<<p%60<<endl;
        }
    }
}
