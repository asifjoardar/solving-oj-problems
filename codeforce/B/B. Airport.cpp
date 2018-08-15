///bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
main()
{
    int m,n,i,max=0,min=0,j=0;
    cin>>n>>m;
    int a[m],b[m];
    for(i=0;i<m;i++){
            cin>>a[i];
            b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        sort(a,a+m);
        max+=a[m-1];
        a[m-1]--;
    }
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        min+=b[j];
        b[j]--;
        if(b[j]==0)
            j++;
    }
    cout<<max<<" "<<min<<endl;
}
