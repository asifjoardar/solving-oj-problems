#include<stdio.h>
int main()
{
    int t,a,c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&a);
        c=a/100;
        a=a%100;
        c=c+a/50;
        a=a%50;
        c=c+a/10;
        a=a%10;
        c=c+a/5;
        a=a%5;
        c=c+a/2;
        a=a%2;
        c=c+a;
        printf("%d\n",c);
    }
    return 0;
}
