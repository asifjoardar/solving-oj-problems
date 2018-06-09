/*#include<stdio.h>
int main()
{
    int a,b,c;
    double n,c1;
    scanf("%d %d %d",&a,&b,&c);
    n=a*b;
    c1=c*c;
    if((int)n%(int)c1==0)
        printf("%.01lf\n",n/c1);
    else
    {
        if((n/c1)<=0)
        printf("%.01lf\n",(n/c1)*(n/c1)+1);
        else
            printf("%.01lf\n",(n/c1)*(n/c1));
    }
    return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double d,a1,b1;
    scanf("%d %d %d",&a,&b,&c);
    a1= ceil(a*1.0/c*1.0);
    b1= ceil(b*1.0/c*1.0);
    d=a1*b1;
    printf("%.0lf\n",d);
    return 0;
}
