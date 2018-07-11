#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[5],i,b;
    while(scanf("%d",&a[0])!=EOF)
    {
        int count=0;
        for(i=1;i<5;i++) cin>>a[i];
        for(i=0;i<5;i++)
        {
            cin>>b;
            if(a[i]!=b) count++;
        }
        if(count==5)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
}
