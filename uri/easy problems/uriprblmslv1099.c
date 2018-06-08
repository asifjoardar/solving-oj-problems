#include<stdio.h>
int main()
{
    int n,i,tem,a,b,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            tem=a;
            a=b;
            b=tem;
        }
        for(j=a+1;j<b;j++)
        {
            if((j&1)==1)
                sum=sum+j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
