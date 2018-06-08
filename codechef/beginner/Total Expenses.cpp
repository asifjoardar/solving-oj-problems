#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,b,x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>1000)
        {
            x=a*b;
            a=x*.1;
            a=x-a;
            printf("%.6lf\n",a);
        }
        else
            printf("%.6lf\n",a*b);
    }
    return 0;
}
