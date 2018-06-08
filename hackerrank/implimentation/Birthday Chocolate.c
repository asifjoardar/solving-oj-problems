#include<stdio.h>
int main()
{
    int count=0,sum,i,j,n,d,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&d,&m);
    for(i=0;i<=n-m;i++)
    {
        sum=0;
        for(j=i;j<i+m;j++)
            sum=sum+a[j];
        if(sum==d)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
