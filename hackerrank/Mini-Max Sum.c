#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,max,min,i;
    long long int r[5];
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    r[0]=a+b+c+d;
    r[1]=a+b+c+e;
    r[2]=a+b+d+e;
    r[3]=a+c+d+e;
    r[4]=b+c+d+e;
    min=r[0];
    max=r[0];
    for(i=0;i<5;i++)
    {
        if(r[i]>max)
            max=r[i];
        if(r[i]<min)
            min=r[i];
    }
    printf("%lld %lld\n",min,max);
    return 0;
}
