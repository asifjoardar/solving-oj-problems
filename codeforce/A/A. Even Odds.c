#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%I64d %I64d",&a,&b);
    if(a%2==0&&b<=(a/2))
    {
        c=(2*b)-1;
    }
    else if(a%2==0&&b>(a/2))
        c= 2*(b-(a+1)/2);
    else if(a%2!=0&&b<=(a/2)+1)
    {
        c=(2*b)-1;
    }
    else if(a%2!=0&&b>(a/2)+1)
        c= 2*(b-(a+1)/2);
    printf("%I64d\n",c);
    return 0;
}
