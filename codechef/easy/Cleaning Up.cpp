#include<iostream>
using namespace std;
main()
{
    int t,a,b,i,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int p[a+1]={0},m[a],n[a];
        for(i=0;i<b;i++)
        {
            cin>>x;
            p[x]=1;
        }
        int q=1,j=0,k=0;
        for(i=1;i<=a;i++)
        {
            if(p[i]!=1)
            {
                if(q&1){
                    m[j++]=i;
                }
                else
                    n[k++]=i;
                    q++;
            }
        }
        for(i=0;i<j;i++) cout<<m[i]<<' ';
        cout<<endl;
        for(i=0;i<k;i++) cout<<n[i]<<' ';
        cout<<endl;
    }
}
