#include<stdio.h>
long long int asif(long long int a,long long int b)
{

    if(a==0&&b>0)
        return b;
    else if(b==0&&a>0)
        return a;
    else if(a%b==0)
        return b;
    return asif(b,a%b);
}
int main()
{
    long long int a,b,gcd,n1,n2,n,i,t;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
    scanf("%lld%lld",&n1,&n2);
    if(n1>n2)
    {
        a=n1;
        b=n2;
    }
    else
    {
        a=n2;
        b=n1;
    }
    gcd=asif(a,b);
    printf("%lld %lld\n",n2/gcd,n1/gcd);
    }
    return 0;
}
