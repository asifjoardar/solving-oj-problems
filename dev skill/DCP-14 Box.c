#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double d,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        d=sqrt((a*a)+(b*b)+(c*c));
        printf("%.2lf\n",d);
    }
    return 0;
}
