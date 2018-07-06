#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t,i,sum=0,x,y;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if((a[i]>=0&&a[i+1]>=0)||(a[i]<=0&&a[i+1]<=0))
        {
            x=abs(a[i]-a[i+1])/t;
            y=abs(a[i]-a[i+1])%t;
        }
        else if(a[i]<0&&a[i+1]>0)
        {
            x=((a[i]*-1)+a[i+1])/t;
            y=((a[i]*-1)+a[i+1])%t;
        }
        if(x>2)
        {
            sum+=2;
        }
        else if(x==2&&y==0)
            sum+=1;
        else if(x==2&&y!=0)
            sum+=2;
    }
    sum+=2;
    cout<<sum<<endl;
}
