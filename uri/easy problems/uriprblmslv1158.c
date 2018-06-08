#include<stdio.h>
int main()
{
    int n,i,j,a,b,tem,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        for(j=1;j<=b;j++)
        {
            if(a%2==0)
            {
                a=a+1;
                sum=sum+a;
                a=a+2;
            }
            else
            {
                sum=sum+a;
                a=a+2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
