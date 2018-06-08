#include<stdio.h>
int main()
{
    int t,i,a;
    double r1,r2,r3,p=0.00,n=0.00,z=0.00;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(a>0)
            p++;
        else if(a<0)
            n++;
        else
            z++;
    }
    r1=p/t;r2=n/t;r3=z/t;
    printf("%.6lf\n%.6lf\n%.6lf\n",r1,r2,r3);
    return 0;
}
