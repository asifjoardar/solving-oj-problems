#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,c;
    while(cin>>n){
        c=0;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                c++;
            }
        }
    }
    cout<<"Minimum exchange operations : "<<c<<endl;
    }
}
