#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    double a,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a<1500)
        {
            x=a-(a*.1);
            y=a-(a*.9);
            printf("%.2lf\n",a+x+y);
        }
        else
        {
            x=a*.98;
            printf("%.2lf\n",500+a+x);
        }
    }
    return 0;
}
