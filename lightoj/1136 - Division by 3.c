#include<stdio.h>
int main()
{
    long long int a,b,n,i,j,count;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%lld%lld",&a,&b);
        if(a>1)
        {
            for(j=a;j<=b;j++)
            {
                if(j%4!=0)
                    count++;
            }
        }
        printf("Case %lld: %lld\n",i,count);
    }
    return 0;
}
