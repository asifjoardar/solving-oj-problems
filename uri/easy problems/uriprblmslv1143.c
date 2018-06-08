#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*i;
        b=i*a;
        printf("%d %d %d\n",i,a,b);
    }
    return 0;
}
