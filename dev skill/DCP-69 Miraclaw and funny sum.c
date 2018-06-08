#include<stdio.h>
int main()
{
    int i,j,n,num,sum,sum1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        sum1=0;
        scanf("%d",&num);
        int a[num];
        for(j=0;j<num;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
            if(a[j]-j>0)
            {
                sum1=sum1+(a[j]-j);
            }
        }
        printf("%d\n",sum-sum1);
    }
    return 0;
}
