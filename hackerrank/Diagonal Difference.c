#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sum=0,sum1=0,p;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }
    p=n-1;
    for(i=0;i<n;i++)
        sum1=sum1+a[i][p--];
    printf("%d\n",abs(sum-sum1));
    return 0;
}
