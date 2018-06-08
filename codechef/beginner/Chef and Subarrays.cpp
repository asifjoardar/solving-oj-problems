#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,s,p,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            p=1;s=0;
            for(j=i;j<n;j++)
            {
                s+=a[j];
                p*=a[j];
                if(s==p)
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
