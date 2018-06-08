#include<iostream>
using namespace std;
int main()
{
    int a1[101],t,n,p,q,i,count,c,b,b1,j;
    cin>>t;
    while(t--)
    {
        for(i=0;i<=100;i++)
        a1[i]=0;
        count=0;
        cin>>n>>p>>q;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        c=p*q;
        for(i=0;i<n;i++)
        {
            if(c<a[i])
            {
                b=a[i]-c;
                b1=a[i]+c;
                if(b1>100) b1=100;
                for(j=b;j<=b1;j++)
                    a1[j]++;
            }
            else
            {
                b=a[i]+c;
                if(b>100) b=100;
                for(j=1;j<=b;j++)
                    a1[j]++;
            }
        }
        for(i=1;i<=100;i++)
        {
            if(a1[i]==0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
