#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,i;
    double d,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        c=((a*1.0)*(b*1.0))/2;
        d=ceil(c);
        printf("%d\n",(int)d);
    }
    return 0;
}
