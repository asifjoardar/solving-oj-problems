#include<stdio.h>
int main()
{
    long long int i,j,n;
    double a[65536];//131072
    for(i=0;scanf("%lld",&n)!=EOF;i++)
    {
        a[i]=sqrt(n);
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%.4lf\n",a[j]);
    }
    return 0;
}
