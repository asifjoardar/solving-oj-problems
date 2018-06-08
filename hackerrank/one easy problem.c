#include<stdio.h>
int main()
{
    int n,i,a,b,s;
    double c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&s);
        c=((a*b*s)-(a+b+s))/(b*s);
        printf("%.0lf\n",c);
    }
    return 0;
}
