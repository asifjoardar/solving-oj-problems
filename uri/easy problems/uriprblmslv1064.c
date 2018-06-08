#include<stdio.h>
int main()
{
    double a[10],c=0,d;
    int i,b=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            b++;
            c=c+a[i];
        }
    }
    d=c/b;
    printf("%d valores positivos\n",b);
    printf("%.1lf\n",d);
    return 0;
}
