#include<bits/stdc++.h>
using namespace std;
int p[1000000],i,k=0,j;
void asif()
{
    for(i=2;i<1000000;i+=2) p[i]=1;
    for(i=3;i<1000000;i+=2)
    {
        if(p[i]==0)
        {
            for(j=3;i*j<1000000;j++)
                p[i*j]=1;
        }
    }
}
main()
{
    asif();
    int x,y,n;
    while(cin>>n)
    {
        int count=0;
        if(n==0) break;
        if(n==4) cout<<1<<endl;
        else{
        for(i=3;i<=n/2;i++)
        {
            if(p[i]==0)
            {
                x=i;
                y=n-i;
                if(p[y]==0)
                    count++;
            }
        }
        cout<<count<<endl;
        }
    }
}
