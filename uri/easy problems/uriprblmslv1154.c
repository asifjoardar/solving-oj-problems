#include<stdio.h>
int main()
{
    int n,sum=0,b=0;
    double c;
    for( ; ; )
    {
        scanf("%d",&n);
        if(n<0)
            break;
        sum=sum+n;
        b++;
    }
    c=(double)sum/(double)b;
    printf("%.2lf\n",c);
    return 0;
}
