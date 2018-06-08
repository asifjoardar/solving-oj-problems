#include<stdio.h>
int main()
{
    int a,b,n;
    while(scanf("%d %d %d",&n,&a,&b)==3)
    {
        printf("%d\n",n*a*b*2);
    }
    return 0;
}
