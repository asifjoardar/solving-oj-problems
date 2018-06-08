#include<stdio.h>
int main()
{
    long long int a,b,num,x,y,tem;
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%lld",&num);
        a=ceil(sqrt(num));
        b=a*a-num;
        if(b<a)
        {
            y=a;
            x=b+1;
        }
        else
        {
            x=a;
            y=num-pow((a-1),2);
        }
        if(a%2==0)
        {
            tem=x;
            x=y;
            y=tem;
        }
        printf("Case %d: %lld %lld\n",i,x,y);
        i++;
    }
    return 0;
}
