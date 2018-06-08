#include<stdio.h>
typedef long long int asif;
asif fact(asif i)
{
    if(i==0) return 1;
    else
    {
        return (fact(i-1)*i);
    }
}
int main()
{
    int i,j=0,c[20],ab,k;
    long long int a[21],b,n,sum=0;
    for(i=0;i<=20;i++)
    {
        a[i]=fact(i);
    }
    scanf("%d",&ab);
    for(k=1;k<=ab;k++){
    j=0;
    sum=0;
    scanf("%lld",&b);
    n=b;
    for(i=20;i>=0;i--)
    {
        if(b>=a[i]){
            b=b-a[i];
            c[j++]=i;
            sum=sum+a[i];
        }
    }
    if(sum==n)
    {
        printf("Case %d: ",k);
        for(i=j-1;i>=0;i--)
        {
            if(i==0)
                printf("%d!\n",c[i]);
            else
                printf("%d!+",c[i]);
        }
    }
    else
        printf("Case %d: impossible\n",k);
    }
    return 0;
}
