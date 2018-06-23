#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        printf("%.0lf\n",pow(b,1/a));
    }
}
