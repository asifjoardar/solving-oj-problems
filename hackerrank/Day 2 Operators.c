#include<stdio.h>
int main()
{
    int a,b,t,t1;
    double n;
    scanf("%lf %d %d",&n,&a,&b);
    t=a/100;
    t1=b/100;
    printf("%lf\n",a*100);
    printf("%d\n",t1);
    printf("The total meal cost is %d dollars.\n",t+t1);
}
