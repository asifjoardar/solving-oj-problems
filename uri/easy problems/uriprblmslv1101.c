#include<stdio.h>
int main()
{
    int a,b,i,sum,tem;
    for( ; ; )
    {

        sum=0;
        scanf("%d %d",&a,&b);
        if(a==0||a<0||b==0||b<0)
            break;
        else
        {
            if(a>b)
            {
                tem=a;
                a=b;
                b=tem;
            }
            for(i=a;i<=b;i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
