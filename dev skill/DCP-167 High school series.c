#include<stdio.h>
int main()
{
    long long int sum;
    int a,n,i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        sum=0;
        for(j=1;j<=a;j++)
        {
            sum=sum+(j*j*j);
        }
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
