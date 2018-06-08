/*#include<stdio.h>
int main()
{
    int n,i,sum;
    for( ; ; )
    {
        sum=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=5;i++)
        {
            if(n&1==1)
            {
                n=n+1;
                sum=sum+n;
                n=n+2;
            }
            else
            {
                sum=sum+n;
                n=n+2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,sum,i;
    for( ; ; )
    {
        sum=0;
        scanf("%d",&a);
        if(a==0)
            break;
        for(i=1;i<=5;i++)
        {
            if(a%2==0)
            {
                sum=sum+a;
                a=a+2;
            }
            else
            {
                a=a+1;
                sum=sum+a;
                a=a+2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
