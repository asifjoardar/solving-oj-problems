#include<stdio.h>
int main()
{
    int i,n;
    double a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&a,&b);
        printf("%.2lf\n",(a/b)*-1);
    }
    return 0;
}
