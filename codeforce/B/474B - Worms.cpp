#include<iostream>
using namespace std;
int asif(int a[],int n,int x,int l)
{
    int mid=l+(n-l)/2;
    if(a[mid]==x) return mid;
    if(a[mid]>x)
    {
        if(a[mid-1]<x) return mid;
        else return asif(a,mid,x,l);
    }
    else
    {
        if(a[mid+1]>=x) return mid+1;
        else return asif(a,n,x,mid);
    }
}
main()
{
    int i,j,x,n,m;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=a[i-1]+x;
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        cout<<asif(a,n,x,1)<<endl;
    }
}
