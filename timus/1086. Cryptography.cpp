#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,t,n;
    int a[200001]={0},b[15001];
    a[0]=1;a[1]=1;
    for(i=4;i<=200000;i+=2) a[i]=1;
    for(i=3;i<=200000;i++)
    {
        if(a[i]!=1)
        {
            for(j=3;i*j<=200000;j++)
                a[i*j]=1;
        }
    }
    b[0]=0;b[1]=2;j=2;
    for(i=3;i<=200000;i+=2)
    {
        if(a[i]==0)
            b[j++]=i;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<b[n]<<endl;
    }
}
