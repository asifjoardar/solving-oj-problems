#include<stdio.h>
int main()
{
    int n=1,j,i1=0;
    double i=0.0,a[3]={1.0,2.0,3.0};
        for(j=0;j<3;j++)
            printf("I=%d J=%d\n",i1,(int)a[j]);
    for(;i<.8;)
    {
        i=i+.2;
        for(n=0;n<3;n++)
            {
                a[n]=a[n]+.2;
                printf("I=%.1lf J=%.1lf\n",i,a[n]);
            }
    }
    i=.8+.2;
    for(j=0;j<3;j++)
    {
        a[j]=a[j]+.2;
    }
    for(j=0;j<3;j++)
            printf("I=%d J=%d\n",(int)i,(int)(a[j]+.2));

    for(;i<1.6;)
    {
        i=i+.2;
        for(n=0;n<3;n++)
            {
                a[n]=a[n]+.2;
                printf("I=%.1lf J=%.1lf\n",i,a[n]);
            }
    }
    i=1.8+.2;
    for(j=0;j<3;j++)
    {
        a[j]=a[j]+.2;
    }
    for(j=0;j<3;j++)
            printf("I=%d J=%d\n",(int)i,(int)a[j]);

            return 0;
}
