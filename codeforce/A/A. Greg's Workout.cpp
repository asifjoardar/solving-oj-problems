#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,a[3]={0},x;
    cin>>n;
    for(i=1,j=1;i<=n;i++,j++)
    {
        cin>>x;
        if(j==1)
        a[0]+=x;
        else if(j==2)
        a[1]+=x;
        else if(j==3)
        {
            a[2]+=x;
            j=0;
        }
    }
    //cout<<a[0]<<a[1]<<a[2]<<endl;
    if(a[0]>a[1]&&a[0]>a[2])
    cout<<"chest"<<endl;
    else if(a[1]>a[0]&&a[1]>a[2])
    cout<<"biceps"<<endl;
    else if(a[2]>a[1]&&a[2]>a[0])
    cout<<"back"<<endl;
}
