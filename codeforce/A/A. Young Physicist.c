#include<stdio.h>
int main()
{
    int sum=0,sum1=0,sum2=0,i,n;
    scanf("%d",&n);
    int x[n],y[n],z[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    if(sum==0)
    {
        for(i=0;i<n;i++)
    {
        sum1=sum1+y[i];
    }
    }
    else
    {
        printf("NO\n");
        return 0;
    }
    if(sum1==0)
    {
        for(i=0;i<n;i++)
    {
        sum2=sum2+z[i];
    }
    }
    else
    {
        printf("NO\n");
        return 0;
    }
    if(sum2==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
