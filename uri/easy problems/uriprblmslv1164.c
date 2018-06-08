/*#include<stdio.h>
int main()
{
    int n,i,j,a,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=a/2;j++)
        {
            if(a%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==a)
            printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,n,j,sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=a/2;j++)
        {
            if(a%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==a)
            printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
    }
    return 0;
}

