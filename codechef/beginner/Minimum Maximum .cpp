#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        long long int min=1000001;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(min>a[i])
                min=a[i];
        }
        printf("%lld\n",(n-1)*min);
    }
}
