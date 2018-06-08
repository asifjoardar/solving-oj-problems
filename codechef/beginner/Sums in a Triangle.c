#include<stdio.h>
int main()
{
    int t,n,a,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int sum=0;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=j;k++)
            {
                scanf("%d",&a);
                sum++;
            }
        }
        printf("%d\n",sum-1);
    }
    return 0;
}
