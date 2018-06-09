#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=0){
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
                a[j]=0;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            count++;
    }
    cout<<count<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            cout<<a[i]<<' ';
        }
    }
    cout<<endl;
    return 0;
}
