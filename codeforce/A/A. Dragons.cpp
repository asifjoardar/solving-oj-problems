#include<iostream>
using namespace std;
int main()
{
    int c,n,i,j,tem;
    cin>>c>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];a[i]=a[j];a[j]=tem;
                tem=b[i];b[i]=b[j];b[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<c)
            c=c+b[i];
        else break;
    }
    if(i==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
