#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,a,p,q,x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        p=a*3;
        q=a*5;
        x3=(q*.55);y3=-1*(p/2);
        x4=-1*(q*.45);y4=y3;
        x1=-1*(q*.45);y1=-1*y3;
        x2=(q*.55);y2=y1;
        printf("Case %d:\n",i);
        cout<<x1<<" "<<y1<<endl;
        cout<<x2<<" "<<y2<<endl;
        cout<<x3<<" "<<y3<<endl;
        cout<<x4<<" "<<y4<<endl;
    }
}
