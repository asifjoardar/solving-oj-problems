#include<iostream>
using namespace std;
main()
{
    int a[100001],i,j,n,count=0;
    for(i=0;i<100001;i++) a[i]=1;
    a[0]=0;a[1]=0;
    for(i=4;i<100001;i+=2) a[i]=0;
    for(i=3;i<100001;i++)
    {
        if(a[i]!=0)
        {
            for(j=3;j*i<100001;j++)
                a[i*j]=0;
        }
    }
    cin>>n;
    int b[n],max=-1;
    for(i=0;i<n;i++){
        cin>>b[i];
        if(b[i]>max) max=b[i];
    }
    for(i=2;i<10;i++)
    {
        if(i>max) break;
        if(a[i]!=0)
        {
            for(j=0;j<n;j++)
            {
                if(i==b[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout<<(n-count)+1<<endl;
}
