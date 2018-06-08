#include<iostream>
using namespace std;
int main()
{
    int a[100000],n,m,car,i,j,x,t;
    while(cin>>n){
    a[0]=1;m=1;car=0;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=a[j]*i+car;
            a[j]=x%10;
            car=x/10;
        }
        while(car>0)
        {
            a[m]=car%10;
            car=car/10;
            m++;
        }
    }
    cout<<n<<'!'<<endl;
    for(i=m-1;i>=0;i--)
        cout<<a[i];
    cout<<endl;
    }
    return 0;
}
