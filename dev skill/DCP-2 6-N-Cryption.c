#include<stdio.h>
typedef long long int ashraf;
ashraf asif(ashraf a,ashraf b)
{
    if(a==0) return b;
    return asif(b%a,a);
}
int main()
{
    ashraf j,m,min,num,sum=0,f;
    int n,i;
    ashraf od,gcd;
    while(scanf("%lld",&od)!=EOF)
    {
        sum=0;
        scanf("%d",&n);
        ashraf a[n];
        /*if(n==1)
        {
            scanf("%d",&a[0]);
            printf("Output: %d\n",a[0]);
        }*/
        if(n>1)
        {
            scanf("%lld %lld",&a[0],&a[1]);
            gcd=asif(a[0],a[1]);
        }
        for(i=2;i<n;i++)
        {
            scanf("%lld",&a[i]);
            gcd=asif(gcd,a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+(a[i]/gcd);
        }
        printf("Output: %lld\n",od-sum);
    }
    return 0;
}
