#include<stdio.h>
int main()
{
    int i;
    unsigned int n;
    long long int a,val,s;
    scanf("%u",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        val=(8*a)-7;
        s=sqrt(val);
        if(s*s==val)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}
