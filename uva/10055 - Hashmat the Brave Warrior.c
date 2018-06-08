#include<stdio.h>
int main()
{
    long long int a,b,tem;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            tem=a;
            a=b;
            b=tem;
        }
        printf("%lld\n",b-a);
    }
    return 0;
}
