#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i,j,num;
    int a[100000],count;
    for(i=0;i<=100000;i++)
    {
        a[i]=1;
    }
    a[0]=0;a[1]=0;a[2]=1;
    for(i=4;i<100000;i+=2)
        a[i]=0;
    for(i=3;i<100000;i++)
    {
        if(a[i]!=0)
        {
            for(j=2;j*i<=100000;j++)
            {
                a[i*j]=0;
            }
        }
    }
    while(scanf("%lld",&num))
    {
        long long int max=-1;
        count=0;
        if(num==0)
            break;
        for(i=num/2;i>=1;i--)
        {
        if(a[i]!=0)
            {
                if(num%i==0)
                {
                    if(max<i)
                        max=i;
                    count++;
                }
            }
        }
        if(count==1)
            printf("-1\n");
        else
            printf("%lld\n",max);
    }
    return 0;
}
