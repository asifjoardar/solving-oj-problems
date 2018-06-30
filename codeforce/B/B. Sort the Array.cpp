#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j=0,count=0,n,k,x=0,y=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            x=i;break;
        }
    }
    for(i=n-1;i>0;i--)
    {
        if(a[i]<a[i-1])
        {
            y=i;break;
        }
    }
    reverse(a+x,a+y+1);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            break;
    }
    if(i+1==n){
        cout<<"yes"<<endl;
        cout<<x+1<<" "<<y+1<<endl;
    }
    else
        cout<<"no"<<endl;
}
