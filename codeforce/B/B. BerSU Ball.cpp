#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int i,n,m,c=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    int b[m];
    for(i=0;i<m;i++) cin>>b[i];
    sort(b,b+m);
    i=j=0;
    while(i<n)
    {
        while(j<m)
        {
            if(b[j]==a[i]-1||b[j]==a[i]+1||b[j]==a[i])
            {
                c++;j++;
                break;
            }
            else
            {
                if(j+1==m||b[j]>a[i])
                break;
                else
                    j++;
            }
        }
        i++;
    }
    cout<<c<<endl;
}
