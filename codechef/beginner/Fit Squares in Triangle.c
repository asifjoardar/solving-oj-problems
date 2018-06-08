#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,x,y,a,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        x=a/2;
        y=((x*x)+x)/2;
        r=abs(x-y);
        printf("%d\n",r);
    }
    return 0;
}
