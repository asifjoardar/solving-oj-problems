#include<stdio.h>
int main()
{
    int a,b,i,tem;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        tem=a;
        a=b;
        b=tem;
    }
    for(i=a+1;i<b;i++)
    {
        if(i%5==2||i%5==3)
            printf("%d\n",i);
    }
    return 0;
}
