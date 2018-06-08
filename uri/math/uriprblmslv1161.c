#include<stdio.h>
typedef long long int asif;
asif fac(asif a)
{
    if(a==0||a==1) return 1;
    else
    return (fac(a-1)*a);
}
int main()
{
    int a,b;
    asif p,q;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        p=fac(a);
        q=fac(b);
        printf("%lld\n",p+q);
    }
}
