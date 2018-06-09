#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,a,i;
        for(i=1;i<=5;i++)
        {
            cin>>a;
            if(a==1) c++;
        }
        switch(c)
        {
            case 0:cout<<"Beginner"<<endl;break;
            case 1:cout<<"Junior Developer"<<endl;break;
            case 2:cout<<"Middle Developer"<<endl;break;
            case 3:cout<<"Senior Developer"<<endl;break;
            case 4:cout<<"Hacker"<<endl;break;
            default :cout<<"Jeff Dean"<<endl;
        }
    }
}
