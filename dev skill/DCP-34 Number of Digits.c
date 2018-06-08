#include<stdio.h>
int main()
{
    int b,t,i,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        b=sqrt(a);
        if(b*b==a)
            printf("Case %d: YES\n",i);
        else
            printf("Case %d: NO\n",i);
    }
    return 0;
}
