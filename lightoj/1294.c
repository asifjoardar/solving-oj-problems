#include<stdio.h>
int main()
{
    int n,s,sum,i,j,a;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            s=1;
            sum=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
             sum=sum+s;
                s=s*-1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
