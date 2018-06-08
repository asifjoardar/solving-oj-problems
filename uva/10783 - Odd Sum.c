#include<stdio.h>
int main()
{
    int i,a,b,j,sum,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%2==1)
                sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
