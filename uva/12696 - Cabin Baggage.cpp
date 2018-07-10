#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,f=0;
    double a=56.00,b=45.00,c=25.00,d=7.00;
    double x,y,z,w;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z>>w;
        if(x<=a&&y<=b&&z<=c&&w<=d){
            cout<<1<<endl;f++;}
        else if(x+y+z<=125&&w<=d)
        {
            cout<<1<<endl;
            f++;
        }
        else
            cout<<0<<endl;
    }
    cout<<f<<endl;
}
