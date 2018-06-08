#include<stdio.h>
int main()
{
    int num,sum,i,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&num);
        a=num;
        while(num!=0)
        {
            sum=sum*10+(num%10);
            num=num/10;
        }
        if(a==sum)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
