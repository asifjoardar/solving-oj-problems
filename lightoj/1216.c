#include<stdio.h>
#define PI 3.14159265359
int main()
{
    int i,n,r1,r2,h,p;
    double x,r,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&r1,&r2,&h,&p);
        x=(double)(r2*h)/(double)(r1-r2);
        r=((double)(r2*p)+(r2*x))/(double)x;
        v=(1/3.0)*PI*((double)(r*r*(p+x))-(r2*r2*x));
        printf("Case %d: %.10lf\n",i,v);
    }
    return 0;
}
