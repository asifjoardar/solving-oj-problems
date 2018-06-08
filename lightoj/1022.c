#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
int main()
{
    int i,n;
    double r,ar,as,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&r);
        p=2*r;
        ar=PI*pow(r,2);
        as=pow(p,2);
        printf("Case %d: %.2lf\n",i,as-ar);
    }
    return 0;
}
