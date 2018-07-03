#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[10],n,i;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        int p=0;
        for(i=0;i<10;i++) cin>>a[i];
        if(a[0]>a[9])
        {
            for(i=0;i<9;i++)
            {
                if(a[i]<a[i+1]){
                    p=1;break;}
            }
        }
        else if(a[0]<a[9])
        {
            for(i=0;i<9;i++)
            {
                if(a[i]>a[i+1]){
                    p=1;break;}
            }
        }
        else if(a[0]==a[9])
        {
            for(i=0;i<9;i++)
            {
                if(a[i]!=a[i+1])
                {
                    p=1;break;
                }
            }
        }
        if(p==1)
            cout<<"Unordered"<<endl;
        else
            cout<<"Ordered"<<endl;
    }
}
