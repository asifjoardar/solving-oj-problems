#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        a[0][i]=1;
    for(i=1;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[i-1][j];
            a[i][j]=sum;
        }
    }
    cout<<a[n-1][n-1]<<endl;
    return 0;
}
