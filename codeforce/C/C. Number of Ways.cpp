#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int sum=0,sum1=0,c=0,i,n,p;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>p;
        sum1+=p;
        a[i]=sum1;
    }
    if(!(a[n-1]%3))
    {
        p=a[n-1]/3;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==2*p)
                sum+=c;
            if(a[i]==p) c++;
        }
        cout<<sum<<endl;
    }
    else
        cout<<0<<endl;
}
