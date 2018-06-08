#include<stdio.h>
int main()
{
    int n,i,j,k,a,b,num[100000],sum,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        count=a*b;
        for(j=a+1;j<b;j++)
            {
                if(j%3==0)
            sum++;
            }
        printf("%d\n",sum);
    }
    return 0;
}
