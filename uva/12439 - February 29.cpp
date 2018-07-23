#include <bits/stdc++.h>
using namespace std;
main(){
    string m,m1;
    char c;
    long long int t,d1,y1,d2,y2,l,l1,l2;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>m>>d1>>c>>y1;
        cin>>m1>>d2>>c>>y2;
        if(m!="January"&&m!="February") y1++;
        if(m1=="January") y2--;
        else if(m1=="February"){
            if(d2<29) y2--;
        }
        l1= ((y1-1)/4-(y1-1)/100+(y1-1)/400);
        l2= ((y2)/4-(y2)/100+(y2)/400);
        l=l2-l1;
        printf("Case %d: %lld\n",i,l);
    }
}
