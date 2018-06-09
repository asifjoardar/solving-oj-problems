#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,n;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==a[j])
            {
                b[k++]=j+1;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<' ';
    cout<<endl;
    return 0;
}
