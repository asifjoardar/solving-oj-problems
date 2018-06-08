#include<stdio.h>
int main()
{
    int n,i,a,b,c,sum,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("\n%d",&s);
        for(j=1;j<=s;j++)
        {
            scanf("%d",&a);
            if(a>0)
                sum=sum+a;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
