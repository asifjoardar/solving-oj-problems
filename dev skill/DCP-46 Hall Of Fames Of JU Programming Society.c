#include<stdio.h>
int main()
{
    unsigned long long int a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%llu %llu",&a,&b);
        c=a/2 + b/2 + (a%2) * (b%2);//(a>>1) + (b>>1) + (a & b & 1);
        printf("%llu\n",c);
    }
    return 0;
}
