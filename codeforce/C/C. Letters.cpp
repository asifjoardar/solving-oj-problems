#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,sum=0,j=0;
    cin>>n>>m;
    long long int a[n],x=0,b,c,k=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
    {
        cin>>b;
        while(b>x){
            j++;
            x=x+a[j-1];}

        c=b-(x-a[j-1]);
        cout<<j<<' '<<c<<endl;
    }
    return 0;
}
