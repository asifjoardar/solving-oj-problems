#include<stdio.h>
int main()
{
    int n,i;
    long long a,p1,p2,j,k,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        for(j=2;j<=a/2;j=j+2)
        {
            if(a%j==0)
                b=(a/j);
            if(b&1==1)
                {
                    break;
                }
        }
        if(b*j==a)
            printf("Case %d: %lld %lld\n",i,b,j);
             else
                printf("Case %d: Impossible\n",i);
    }
    return 0;
}
