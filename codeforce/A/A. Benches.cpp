#include<bits/stdc++.h>
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define pf printf
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,i,p=-1;
    cin>>n>>m;
    int x[n];
    f0(i,n)
    {
        cin>>x[i];
        //m+=x[i];
        p=max(p,x[i]);
    }
    f1(i,m)
    {
        sort(x,x+n);
        x[0]+=1;
    }
    sort(x,x+n);
    cout<<x[n-1]<<" "<<p+m<<endl;
}
