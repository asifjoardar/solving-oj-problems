#include<iostream>
using namespace std;
int main()
{
    int t,n1,n,count,i,j;
    cin>>t;
    while(t--)
    {
        count=0;
        j=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        cin>>n1;
        int b[n1];
        for(i=0;i<n1;i++) cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==b[j])
            {
                count++;
                j++;
            }
            if(count==n1)
                break;
        }
        if(count==n1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
