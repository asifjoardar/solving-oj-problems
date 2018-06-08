#include<stdio.h>
int main()
{
    int n,a,i,sum=0;
    scanf("%d",&n);
    a=5;
    for(i=1;i<=n;i++)
    {
        sum=sum+a/2;
        a=a/2*3;
    }
    printf("%d\n",sum);
    return 0;
}
