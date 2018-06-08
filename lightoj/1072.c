#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,a;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        double R,r,b;
        scanf("%lf %d", &R,&a);
        b=3.14159265359/a;
        r = (R*sin(b)) / (sin(b)+1);

        printf("Case %d: %.10lf\n",i,r);
    }

    return 0;
}
