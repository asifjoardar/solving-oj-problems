#include<stdio.h>
int main()
{
    int a,b,t;
    while(scanf("%d %d",&a,&b)==2)
    {
        t=a+b-1;
        printf("%d %d\n",t-a,t-b);
    }
    return 0;
}
