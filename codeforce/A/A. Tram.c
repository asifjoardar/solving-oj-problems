#include<stdio.h>
int main()
{
    int n,i,j,max;
    scanf("%d",&n);
    int a[n][2],sum[n];
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    sum[0]=sum[0]+a[0][1];
    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]-a[i][0]+a[i][1];
    }
    max=sum[0];
    for(i=1;i<n;i++)
    {
        if(max<sum[i])
            max=sum[i];
    }
    printf("%d\n",max);
    return 0;
}
