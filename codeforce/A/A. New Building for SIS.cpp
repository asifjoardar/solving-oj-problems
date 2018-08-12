#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,h,a,b,k,i,t1,t2,f1,f2,x1,x2;
    cin>>n>>h>>a>>b>>k;
    for(i=0;i<k;i++)
    {
        cin>>t1>>f1>>t2>>f2;
        if(t1==t2)
        {
            cout<<abs(f1-f2)<<endl;
        }
        else
        {
            int p=abs(t2-t1);
            if(f1>=max(a,b))
            {
                cout<<(f1-max(a,b))+abs(max(a,b)-f2)+p<<endl;
            }
            else if(f1<=min(a,b))
            {
                cout<<(min(a,b)-f1)+abs(min(a,b)-f2)+p<<endl;
            }
            else
            {
                int sum=0;
                if(f1<a){
                    sum+=a-f1;
                    f1=a;
                }
                else if(f1>b)
                {
                    sum+=f1-b;f1=b;
                }
                sum+=abs(f1-f2)+p;
                cout<<sum<<endl;
            }
        }
    }
}
