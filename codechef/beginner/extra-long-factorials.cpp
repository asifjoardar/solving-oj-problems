#include<iostream>
using namespace std;
int main()
{
    int a[200],m,i,n,carr,x,j;
    cin>>n;
    a[0]=1;
    m=1;
    carr=0;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=a[j]*i+carr;
            a[j]=x%10;
            carr=x/10;
        }
        while(carr>0)
        {
            a[m]=carr%10;
            carr=carr/10;
            m++;
        }
    }
    for(i=m-1;i>=0;i--)
        cout<<a[i];
    cout<<endl;
    return 0;
}
