#include<bits/stdc++.h>
using namespace std;
main()
{
    int h,h1,fh,m,m1,fm;
    while(cin>>h>>m>>h1>>m1)
    {
        if(h==0&&m==0&&h1==0&&m1==0) break;
        fh=h1-h;
        fm=m1-m;
        if(fm<0)
        {
            fm+=60;
            fh-=1;
        }
        if(fh<0)
        {
            fh+=24;
        }
        cout<<fh*60+fm<<endl;
    }
}
