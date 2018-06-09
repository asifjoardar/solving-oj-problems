#include<iostream>
using namespace std;
int main()
{
    int b,i,x,p=0,n;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        a[i]=0;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>b;
        a[b]++;
    }
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>b;
        a[b]++;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0){
            break;
        }
    }
    if(i==n+1)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
