#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,j,sum=0,sum1=0;
    cin>>n>>m;
    int a[m];
    pair<int,int> p[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i].first;
        p[i].second=i+1;
    }
    sort(p,p+n);
    for(i=n-1,j=0;j<m;j++,i--)
    {
        a[j]=p[i].second;
        sum+=p[i].first;
    }
    cout<<sum<<endl;
    if(m>1){
    sort(a,a+m);
    cout<<a[0]<<" ";
    sum1+=a[0];
    for(i=1;i<m;i++)
    {
        sum1+=a[i]-a[i-1];
    }
    if(abs(sum1-n)!=0)
        a[m-1]=a[m-1]+abs(sum1-n);
    for(i=1;i<m;i++){
        cout<<a[i]-a[i-1]<<" ";
    }
    cout<<endl;
    }
    else
        cout<<n<<endl;
}
