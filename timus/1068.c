#include<stdio.h>
int main()
{
    long int i,n,sum;
    while(scanf("%ld",&n)!=EOF)
    {
        sum=0;
        if(n<=0)
        {
        for(i=n;i<=1;i++)
            sum=sum+i;
        }
        else
        {
        for(i=n;i>=1;i--)
            sum=sum+i;
        }
    printf("%ld\n",sum);
    }
    return 0;
}
