#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,area,side,apo,pi=3.1415926535897932384626433832795;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        side=2.0*a*sin(pi/b);
        apo=a*cos(pi/b);
        area=(b*side*apo)/2.0;
        printf("%.3lf\n",area);
    }
}
