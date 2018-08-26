#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,h,h1,m,m1,mm,d,t1,t2;
    cin>>t;
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        cin>>mm;
        scanf("%d:%d",&h1,&m1);
        cin>>d;
        t1=(h*60)+m+mm;
        t2=((h1*60)+m1);
        if(t1<=t2+d)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}
